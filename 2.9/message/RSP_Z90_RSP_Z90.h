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


#ifndef __RSP_Z90_RSP_Z90__29_H__
#define __RSP_Z90_RSP_Z90__29_H__

#include "../../common/Util.h"
#include "../segment/CTD.h"
#include "../segment/DSC.h"
#include "../segment/ERR.h"
#include "../segment/MSA.h"
#include "../segment/MSH.h"
#include "../segment/NK1.h"
#include "../segment/NTE.h"
#include "../segment/OBR.h"
#include "../segment/OBX.h"
#include "../segment/ORC.h"
#include "../segment/PD1.h"
#include "../segment/PID.h"
#include "../segment/PV1.h"
#include "../segment/PV2.h"
#include "../segment/QAK.h"
#include "../segment/QPD.h"
#include "../segment/RCP.h"
#include "../segment/SFT.h"
#include "../segment/SPM.h"
#include "../segment/TQ1.h"
#include "../segment/TQ2.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/* Internal structures/groups */
struct RSP_Z90_RSP_Z90_QUERY_RESPONSE; /* QUERY_RESPONSE */
struct RSP_Z90_RSP_Z90_PATIENT; /* PATIENT */
struct RSP_Z90_RSP_Z90_COMMON_ORDER; /* COMMON_ORDER */
struct RSP_Z90_RSP_Z90_SPECIMEN; /* SPECIMEN */
struct RSP_Z90_RSP_Z90_VISIT; /* VISIT */
struct RSP_Z90_RSP_Z90_VISIT; /* VISIT */
struct RSP_Z90_RSP_Z90_TIMING; /* TIMING */
struct RSP_Z90_RSP_Z90_OBSERVATION; /* OBSERVATION */
struct RSP_Z90_RSP_Z90_VISIT; /* VISIT */
struct RSP_Z90_RSP_Z90_TIMING; /* TIMING */
struct RSP_Z90_RSP_Z90_OBSERVATION; /* OBSERVATION */

/*  */
struct RSP_Z90_RSP_Z90 : public HL7Message {
  RSP_Z90_RSP_Z90() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RSP_Z90_RSP_Z90_MSH_1,
    RSP_Z90_RSP_Z90_SFT_2,
    RSP_Z90_RSP_Z90_UAC_3,
    RSP_Z90_RSP_Z90_MSA_4,
    RSP_Z90_RSP_Z90_ERR_5,
    RSP_Z90_RSP_Z90_QAK_6,
    RSP_Z90_RSP_Z90_QPD_7,
    RSP_Z90_RSP_Z90_RCP_8,
    RSP_Z90_RSP_Z90_DSC_10,
    RSP_Z90_RSP_Z90_NK1_15,
    RSP_Z90_RSP_Z90_NTE_16,
    RSP_Z90_RSP_Z90_PD1_17,
    RSP_Z90_RSP_Z90_PID_18,
    RSP_Z90_RSP_Z90_PV1_19,
    RSP_Z90_RSP_Z90_PV2_20,
    RSP_Z90_RSP_Z90_NK1_22,
    RSP_Z90_RSP_Z90_NTE_23,
    RSP_Z90_RSP_Z90_PD1_24,
    RSP_Z90_RSP_Z90_PID_25,
    RSP_Z90_RSP_Z90_CTD_28,
    RSP_Z90_RSP_Z90_NTE_29,
    RSP_Z90_RSP_Z90_OBR_30,
    RSP_Z90_RSP_Z90_ORC_31,
    RSP_Z90_RSP_Z90_PV1_32,
    RSP_Z90_RSP_Z90_PV2_33,
    RSP_Z90_RSP_Z90_PV1_34,
    RSP_Z90_RSP_Z90_PV2_35,
    RSP_Z90_RSP_Z90_TQ1_36,
    RSP_Z90_RSP_Z90_TQ2_37,
    RSP_Z90_RSP_Z90_PV1_38,
    RSP_Z90_RSP_Z90_PV2_39,
    RSP_Z90_RSP_Z90_TQ1_40,
    RSP_Z90_RSP_Z90_TQ2_41,
    RSP_Z90_RSP_Z90_NTE_42,
    RSP_Z90_RSP_Z90_OBX_43,
    RSP_Z90_RSP_Z90_NK1_45,
    RSP_Z90_RSP_Z90_NTE_46,
    RSP_Z90_RSP_Z90_PD1_47,
    RSP_Z90_RSP_Z90_PID_48,
    RSP_Z90_RSP_Z90_CTD_51,
    RSP_Z90_RSP_Z90_NTE_52,
    RSP_Z90_RSP_Z90_OBR_53,
    RSP_Z90_RSP_Z90_ORC_54,
    RSP_Z90_RSP_Z90_OBX_55,
    RSP_Z90_RSP_Z90_SPM_56,
    RSP_Z90_RSP_Z90_PV1_57,
    RSP_Z90_RSP_Z90_PV2_58,
    RSP_Z90_RSP_Z90_PV1_59,
    RSP_Z90_RSP_Z90_PV2_60,
    RSP_Z90_RSP_Z90_TQ1_61,
    RSP_Z90_RSP_Z90_TQ2_62,
    RSP_Z90_RSP_Z90_PV1_63,
    RSP_Z90_RSP_Z90_PV2_64,
    RSP_Z90_RSP_Z90_TQ1_65,
    RSP_Z90_RSP_Z90_TQ2_66,
    RSP_Z90_RSP_Z90_NTE_67,
    RSP_Z90_RSP_Z90_OBX_68,
    FIELD_ID_MAX
  };

  const char* className() const { return "RSP_Z90_RSP_Z90"; }
  RSP_Z90_RSP_Z90* create() const { return new RSP_Z90_RSP_Z90(); }

 private:
  /* Initialize object */
  void init() {
    setName("RSP_Z90_RSP_Z90");
    addObject<MSH>(RSP_Z90_RSP_Z90_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(RSP_Z90_RSP_Z90_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(RSP_Z90_RSP_Z90_UAC_3, "UAC.3", HL7::optional, HL7::repetition_off);
    addObject<MSA>(RSP_Z90_RSP_Z90_MSA_4, "MSA.4", HL7::initialized, HL7::repetition_off);
    addObject<ERR>(RSP_Z90_RSP_Z90_ERR_5, "ERR.5", HL7::optional, HL7::repetition_off);
    addObject<QAK>(RSP_Z90_RSP_Z90_QAK_6, "QAK.6", HL7::initialized, HL7::repetition_off);
    addObject<QPD>(RSP_Z90_RSP_Z90_QPD_7, "QPD.7", HL7::initialized, HL7::repetition_off);
    addObject<RCP>(RSP_Z90_RSP_Z90_RCP_8, "RCP.8", HL7::initialized, HL7::repetition_off);
    addObject<DSC>(RSP_Z90_RSP_Z90_DSC_10, "DSC.10", HL7::initialized, HL7::repetition_off);
    addObject<NK1>(RSP_Z90_RSP_Z90_NK1_15, "NK1.15", HL7::optional, HL7::repetition_on);
    addObject<NTE>(RSP_Z90_RSP_Z90_NTE_16, "NTE.16", HL7::optional, HL7::repetition_on);
    addObject<PD1>(RSP_Z90_RSP_Z90_PD1_17, "PD1.17", HL7::optional, HL7::repetition_off);
    addObject<PID>(RSP_Z90_RSP_Z90_PID_18, "PID.18", HL7::initialized, HL7::repetition_off);
    addObject<PV1>(RSP_Z90_RSP_Z90_PV1_19, "PV1.19", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(RSP_Z90_RSP_Z90_PV2_20, "PV2.20", HL7::optional, HL7::repetition_off);
    addObject<NK1>(RSP_Z90_RSP_Z90_NK1_22, "NK1.22", HL7::optional, HL7::repetition_on);
    addObject<NTE>(RSP_Z90_RSP_Z90_NTE_23, "NTE.23", HL7::optional, HL7::repetition_on);
    addObject<PD1>(RSP_Z90_RSP_Z90_PD1_24, "PD1.24", HL7::optional, HL7::repetition_off);
    addObject<PID>(RSP_Z90_RSP_Z90_PID_25, "PID.25", HL7::initialized, HL7::repetition_off);
    addObject<CTD>(RSP_Z90_RSP_Z90_CTD_28, "CTD.28", HL7::optional, HL7::repetition_off);
    addObject<NTE>(RSP_Z90_RSP_Z90_NTE_29, "NTE.29", HL7::optional, HL7::repetition_on);
    addObject<OBR>(RSP_Z90_RSP_Z90_OBR_30, "OBR.30", HL7::initialized, HL7::repetition_off);
    addObject<ORC>(RSP_Z90_RSP_Z90_ORC_31, "ORC.31", HL7::initialized, HL7::repetition_off);
    addObject<PV1>(RSP_Z90_RSP_Z90_PV1_32, "PV1.32", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(RSP_Z90_RSP_Z90_PV2_33, "PV2.33", HL7::optional, HL7::repetition_off);
    addObject<PV1>(RSP_Z90_RSP_Z90_PV1_34, "PV1.34", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(RSP_Z90_RSP_Z90_PV2_35, "PV2.35", HL7::optional, HL7::repetition_off);
    addObject<TQ1>(RSP_Z90_RSP_Z90_TQ1_36, "TQ1.36", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(RSP_Z90_RSP_Z90_TQ2_37, "TQ2.37", HL7::optional, HL7::repetition_on);
    addObject<PV1>(RSP_Z90_RSP_Z90_PV1_38, "PV1.38", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(RSP_Z90_RSP_Z90_PV2_39, "PV2.39", HL7::optional, HL7::repetition_off);
    addObject<TQ1>(RSP_Z90_RSP_Z90_TQ1_40, "TQ1.40", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(RSP_Z90_RSP_Z90_TQ2_41, "TQ2.41", HL7::optional, HL7::repetition_on);
    addObject<NTE>(RSP_Z90_RSP_Z90_NTE_42, "NTE.42", HL7::optional, HL7::repetition_on);
    addObject<OBX>(RSP_Z90_RSP_Z90_OBX_43, "OBX.43", HL7::optional, HL7::repetition_off);
    addObject<NK1>(RSP_Z90_RSP_Z90_NK1_45, "NK1.45", HL7::optional, HL7::repetition_on);
    addObject<NTE>(RSP_Z90_RSP_Z90_NTE_46, "NTE.46", HL7::optional, HL7::repetition_on);
    addObject<PD1>(RSP_Z90_RSP_Z90_PD1_47, "PD1.47", HL7::optional, HL7::repetition_off);
    addObject<PID>(RSP_Z90_RSP_Z90_PID_48, "PID.48", HL7::initialized, HL7::repetition_off);
    addObject<CTD>(RSP_Z90_RSP_Z90_CTD_51, "CTD.51", HL7::optional, HL7::repetition_off);
    addObject<NTE>(RSP_Z90_RSP_Z90_NTE_52, "NTE.52", HL7::optional, HL7::repetition_on);
    addObject<OBR>(RSP_Z90_RSP_Z90_OBR_53, "OBR.53", HL7::initialized, HL7::repetition_off);
    addObject<ORC>(RSP_Z90_RSP_Z90_ORC_54, "ORC.54", HL7::initialized, HL7::repetition_off);
    addObject<OBX>(RSP_Z90_RSP_Z90_OBX_55, "OBX.55", HL7::optional, HL7::repetition_on);
    addObject<SPM>(RSP_Z90_RSP_Z90_SPM_56, "SPM.56", HL7::initialized, HL7::repetition_off);
    addObject<PV1>(RSP_Z90_RSP_Z90_PV1_57, "PV1.57", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(RSP_Z90_RSP_Z90_PV2_58, "PV2.58", HL7::optional, HL7::repetition_off);
    addObject<PV1>(RSP_Z90_RSP_Z90_PV1_59, "PV1.59", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(RSP_Z90_RSP_Z90_PV2_60, "PV2.60", HL7::optional, HL7::repetition_off);
    addObject<TQ1>(RSP_Z90_RSP_Z90_TQ1_61, "TQ1.61", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(RSP_Z90_RSP_Z90_TQ2_62, "TQ2.62", HL7::optional, HL7::repetition_on);
    addObject<PV1>(RSP_Z90_RSP_Z90_PV1_63, "PV1.63", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(RSP_Z90_RSP_Z90_PV2_64, "PV2.64", HL7::optional, HL7::repetition_off);
    addObject<TQ1>(RSP_Z90_RSP_Z90_TQ1_65, "TQ1.65", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(RSP_Z90_RSP_Z90_TQ2_66, "TQ2.66", HL7::optional, HL7::repetition_on);
    addObject<NTE>(RSP_Z90_RSP_Z90_NTE_67, "NTE.67", HL7::optional, HL7::repetition_on);
    addObject<OBX>(RSP_Z90_RSP_Z90_OBX_68, "OBX.68", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, RSP_Z90_RSP_Z90_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, RSP_Z90_RSP_Z90_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, RSP_Z90_RSP_Z90_UAC_3);
  }
  MSA* getMSA_4(size_t index = 0) {
    return (MSA*)this->getObjectSafe(index, RSP_Z90_RSP_Z90_MSA_4);
  }
  ERR* getERR_5(size_t index = 0) {
    return (ERR*)this->getObjectSafe(index, RSP_Z90_RSP_Z90_ERR_5);
  }
  QAK* getQAK_6(size_t index = 0) {
    return (QAK*)this->getObjectSafe(index, RSP_Z90_RSP_Z90_QAK_6);
  }
  QPD* getQPD_7(size_t index = 0) {
    return (QPD*)this->getObjectSafe(index, RSP_Z90_RSP_Z90_QPD_7);
  }
  RCP* getRCP_8(size_t index = 0) {
    return (RCP*)this->getObjectSafe(index, RSP_Z90_RSP_Z90_RCP_8);
  }
  DSC* getDSC_10(size_t index = 0) {
    return (DSC*)this->getObjectSafe(index, RSP_Z90_RSP_Z90_DSC_10);
  }
  NK1* getNK1_15(size_t index = 0) {
    return (NK1*)this->getObjectSafe(index, RSP_Z90_RSP_Z90_NK1_15);
  }
  NTE* getNTE_16(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RSP_Z90_RSP_Z90_NTE_16);
  }
  PD1* getPD1_17(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, RSP_Z90_RSP_Z90_PD1_17);
  }
  PID* getPID_18(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, RSP_Z90_RSP_Z90_PID_18);
  }
  PV1* getPV1_19(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, RSP_Z90_RSP_Z90_PV1_19);
  }
  PV2* getPV2_20(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, RSP_Z90_RSP_Z90_PV2_20);
  }
  NK1* getNK1_22(size_t index = 0) {
    return (NK1*)this->getObjectSafe(index, RSP_Z90_RSP_Z90_NK1_22);
  }
  NTE* getNTE_23(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RSP_Z90_RSP_Z90_NTE_23);
  }
  PD1* getPD1_24(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, RSP_Z90_RSP_Z90_PD1_24);
  }
  PID* getPID_25(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, RSP_Z90_RSP_Z90_PID_25);
  }
  CTD* getCTD_28(size_t index = 0) {
    return (CTD*)this->getObjectSafe(index, RSP_Z90_RSP_Z90_CTD_28);
  }
  NTE* getNTE_29(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RSP_Z90_RSP_Z90_NTE_29);
  }
  OBR* getOBR_30(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, RSP_Z90_RSP_Z90_OBR_30);
  }
  ORC* getORC_31(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, RSP_Z90_RSP_Z90_ORC_31);
  }
  PV1* getPV1_32(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, RSP_Z90_RSP_Z90_PV1_32);
  }
  PV2* getPV2_33(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, RSP_Z90_RSP_Z90_PV2_33);
  }
  PV1* getPV1_34(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, RSP_Z90_RSP_Z90_PV1_34);
  }
  PV2* getPV2_35(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, RSP_Z90_RSP_Z90_PV2_35);
  }
  TQ1* getTQ1_36(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, RSP_Z90_RSP_Z90_TQ1_36);
  }
  TQ2* getTQ2_37(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, RSP_Z90_RSP_Z90_TQ2_37);
  }
  PV1* getPV1_38(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, RSP_Z90_RSP_Z90_PV1_38);
  }
  PV2* getPV2_39(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, RSP_Z90_RSP_Z90_PV2_39);
  }
  TQ1* getTQ1_40(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, RSP_Z90_RSP_Z90_TQ1_40);
  }
  TQ2* getTQ2_41(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, RSP_Z90_RSP_Z90_TQ2_41);
  }
  NTE* getNTE_42(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RSP_Z90_RSP_Z90_NTE_42);
  }
  OBX* getOBX_43(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, RSP_Z90_RSP_Z90_OBX_43);
  }
  NK1* getNK1_45(size_t index = 0) {
    return (NK1*)this->getObjectSafe(index, RSP_Z90_RSP_Z90_NK1_45);
  }
  NTE* getNTE_46(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RSP_Z90_RSP_Z90_NTE_46);
  }
  PD1* getPD1_47(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, RSP_Z90_RSP_Z90_PD1_47);
  }
  PID* getPID_48(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, RSP_Z90_RSP_Z90_PID_48);
  }
  CTD* getCTD_51(size_t index = 0) {
    return (CTD*)this->getObjectSafe(index, RSP_Z90_RSP_Z90_CTD_51);
  }
  NTE* getNTE_52(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RSP_Z90_RSP_Z90_NTE_52);
  }
  OBR* getOBR_53(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, RSP_Z90_RSP_Z90_OBR_53);
  }
  ORC* getORC_54(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, RSP_Z90_RSP_Z90_ORC_54);
  }
  OBX* getOBX_55(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, RSP_Z90_RSP_Z90_OBX_55);
  }
  SPM* getSPM_56(size_t index = 0) {
    return (SPM*)this->getObjectSafe(index, RSP_Z90_RSP_Z90_SPM_56);
  }
  PV1* getPV1_57(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, RSP_Z90_RSP_Z90_PV1_57);
  }
  PV2* getPV2_58(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, RSP_Z90_RSP_Z90_PV2_58);
  }
  PV1* getPV1_59(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, RSP_Z90_RSP_Z90_PV1_59);
  }
  PV2* getPV2_60(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, RSP_Z90_RSP_Z90_PV2_60);
  }
  TQ1* getTQ1_61(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, RSP_Z90_RSP_Z90_TQ1_61);
  }
  TQ2* getTQ2_62(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, RSP_Z90_RSP_Z90_TQ2_62);
  }
  PV1* getPV1_63(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, RSP_Z90_RSP_Z90_PV1_63);
  }
  PV2* getPV2_64(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, RSP_Z90_RSP_Z90_PV2_64);
  }
  TQ1* getTQ1_65(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, RSP_Z90_RSP_Z90_TQ1_65);
  }
  TQ2* getTQ2_66(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, RSP_Z90_RSP_Z90_TQ2_66);
  }
  NTE* getNTE_67(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RSP_Z90_RSP_Z90_NTE_67);
  }
  OBX* getOBX_68(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, RSP_Z90_RSP_Z90_OBX_68);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_RSP_Z90_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_RSP_Z90_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_RSP_Z90_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMSA_4(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_RSP_Z90_MSA_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isERR_5(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_RSP_Z90_ERR_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQAK_6(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_RSP_Z90_QAK_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQPD_7(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_RSP_Z90_QPD_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRCP_8(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_RSP_Z90_RCP_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDSC_10(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_RSP_Z90_DSC_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNK1_15(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_RSP_Z90_NK1_15) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_16(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_RSP_Z90_NTE_16) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_17(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_RSP_Z90_PD1_17) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_18(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_RSP_Z90_PID_18) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_19(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_RSP_Z90_PV1_19) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_20(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_RSP_Z90_PV2_20) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNK1_22(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_RSP_Z90_NK1_22) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_23(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_RSP_Z90_NTE_23) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_24(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_RSP_Z90_PD1_24) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_25(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_RSP_Z90_PID_25) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCTD_28(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_RSP_Z90_CTD_28) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_29(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_RSP_Z90_NTE_29) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_30(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_RSP_Z90_OBR_30) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_31(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_RSP_Z90_ORC_31) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_32(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_RSP_Z90_PV1_32) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_33(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_RSP_Z90_PV2_33) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_34(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_RSP_Z90_PV1_34) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_35(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_RSP_Z90_PV2_35) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_36(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_RSP_Z90_TQ1_36) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_37(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_RSP_Z90_TQ2_37) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_38(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_RSP_Z90_PV1_38) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_39(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_RSP_Z90_PV2_39) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_40(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_RSP_Z90_TQ1_40) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_41(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_RSP_Z90_TQ2_41) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_42(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_RSP_Z90_NTE_42) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_43(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_RSP_Z90_OBX_43) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNK1_45(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_RSP_Z90_NK1_45) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_46(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_RSP_Z90_NTE_46) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_47(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_RSP_Z90_PD1_47) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_48(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_RSP_Z90_PID_48) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCTD_51(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_RSP_Z90_CTD_51) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_52(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_RSP_Z90_NTE_52) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_53(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_RSP_Z90_OBR_53) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_54(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_RSP_Z90_ORC_54) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_55(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_RSP_Z90_OBX_55) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSPM_56(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_RSP_Z90_SPM_56) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_57(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_RSP_Z90_PV1_57) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_58(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_RSP_Z90_PV2_58) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_59(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_RSP_Z90_PV1_59) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_60(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_RSP_Z90_PV2_60) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_61(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_RSP_Z90_TQ1_61) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_62(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_RSP_Z90_TQ2_62) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_63(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_RSP_Z90_PV1_63) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_64(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_RSP_Z90_PV2_64) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_65(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_RSP_Z90_TQ1_65) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_66(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_RSP_Z90_TQ2_66) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_67(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_RSP_Z90_NTE_67) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_68(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z90_RSP_Z90_OBX_68) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RSP_Z90_RSP_Z90_ */
} /* namespace HL7_29 */
#endif /*  __RSP_Z90_RSP_Z90__29_H__ */
