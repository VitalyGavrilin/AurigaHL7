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


#ifndef __RSP_Z88_RSP_Z88__29_H__
#define __RSP_Z88_RSP_Z88__29_H__

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
struct RSP_Z88_RSP_Z88_QUERY_RESPONSE; /* QUERY_RESPONSE */
struct RSP_Z88_RSP_Z88_PATIENT; /* PATIENT */
struct RSP_Z88_RSP_Z88_ALLERGY; /* ALLERGY */
struct RSP_Z88_RSP_Z88_VISIT; /* VISIT */
struct RSP_Z88_RSP_Z88_COMMON_ORDER; /* COMMON_ORDER */
struct RSP_Z88_RSP_Z88_TIMING; /* TIMING */
struct RSP_Z88_RSP_Z88_ORDER_DETAIL; /* ORDER_DETAIL */
struct RSP_Z88_RSP_Z88_ORDER_ENCODED; /* ORDER_ENCODED */
struct RSP_Z88_RSP_Z88_OBSERVATION; /* OBSERVATION */
struct RSP_Z88_RSP_Z88_COMPONENT; /* COMPONENT */
struct RSP_Z88_RSP_Z88_COMPONENT; /* COMPONENT */
struct RSP_Z88_RSP_Z88_TIMING_ENCODED; /* TIMING_ENCODED */
struct RSP_Z88_RSP_Z88_COMPONENT; /* COMPONENT */
struct RSP_Z88_RSP_Z88_TIMING_ENCODED; /* TIMING_ENCODED */

/*  */
struct RSP_Z88_RSP_Z88 : public HL7Message {
  RSP_Z88_RSP_Z88() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RSP_Z88_RSP_Z88_MSH_1,
    RSP_Z88_RSP_Z88_SFT_2,
    RSP_Z88_RSP_Z88_UAC_3,
    RSP_Z88_RSP_Z88_MSA_4,
    RSP_Z88_RSP_Z88_ERR_5,
    RSP_Z88_RSP_Z88_QAK_6,
    RSP_Z88_RSP_Z88_QPD_7,
    RSP_Z88_RSP_Z88_RCP_8,
    RSP_Z88_RSP_Z88_DSC_12,
    RSP_Z88_RSP_Z88_NTE_13,
    RSP_Z88_RSP_Z88_PD1_14,
    RSP_Z88_RSP_Z88_PID_15,
    RSP_Z88_RSP_Z88_ORC_23,
    RSP_Z88_RSP_Z88_RXC_25,
    RSP_Z88_RSP_Z88_RXD_26,
    RSP_Z88_RSP_Z88_TQ1_27,
    RSP_Z88_RSP_Z88_TQ2_28,
    RSP_Z88_RSP_Z88_TQ1_29,
    RSP_Z88_RSP_Z88_TQ2_30,
    RSP_Z88_RSP_Z88_NTE_32,
    RSP_Z88_RSP_Z88_RXO_34,
    RSP_Z88_RSP_Z88_NTE_35,
    RSP_Z88_RSP_Z88_TQ1_37,
    RSP_Z88_RSP_Z88_TQ2_38,
    RSP_Z88_RSP_Z88_NTE_40,
    RSP_Z88_RSP_Z88_RXO_42,
    RSP_Z88_RSP_Z88_RXC_45,
    RSP_Z88_RSP_Z88_RXE_46,
    RSP_Z88_RSP_Z88_NTE_47,
    RSP_Z88_RSP_Z88_NTE_49,
    RSP_Z88_RSP_Z88_TQ1_51,
    RSP_Z88_RSP_Z88_TQ2_52,
    RSP_Z88_RSP_Z88_TQ1_53,
    RSP_Z88_RSP_Z88_TQ2_54,
    RSP_Z88_RSP_Z88_NTE_56,
    RSP_Z88_RSP_Z88_RXO_58,
    RSP_Z88_RSP_Z88_RXC_61,
    RSP_Z88_RSP_Z88_RXE_62,
    RSP_Z88_RSP_Z88_NTE_63,
    RSP_Z88_RSP_Z88_OBX_64,
    RSP_Z88_RSP_Z88_NTE_65,
    RSP_Z88_RSP_Z88_NTE_67,
    RSP_Z88_RSP_Z88_TQ1_69,
    RSP_Z88_RSP_Z88_TQ2_70,
    FIELD_ID_MAX
  };

  const char* className() const { return "RSP_Z88_RSP_Z88"; }
  RSP_Z88_RSP_Z88* create() const { return new RSP_Z88_RSP_Z88(); }

 private:
  /* Initialize object */
  void init() {
    setName("RSP_Z88_RSP_Z88");
    addObject<MSH>(RSP_Z88_RSP_Z88_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(RSP_Z88_RSP_Z88_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(RSP_Z88_RSP_Z88_UAC_3, "UAC.3", HL7::optional, HL7::repetition_off);
    addObject<MSA>(RSP_Z88_RSP_Z88_MSA_4, "MSA.4", HL7::initialized, HL7::repetition_off);
    addObject<ERR>(RSP_Z88_RSP_Z88_ERR_5, "ERR.5", HL7::optional, HL7::repetition_off);
    addObject<QAK>(RSP_Z88_RSP_Z88_QAK_6, "QAK.6", HL7::initialized, HL7::repetition_off);
    addObject<QPD>(RSP_Z88_RSP_Z88_QPD_7, "QPD.7", HL7::initialized, HL7::repetition_off);
    addObject<RCP>(RSP_Z88_RSP_Z88_RCP_8, "RCP.8", HL7::initialized, HL7::repetition_off);
    addObject<DSC>(RSP_Z88_RSP_Z88_DSC_12, "DSC.12", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(RSP_Z88_RSP_Z88_NTE_13, "NTE.13", HL7::optional, HL7::repetition_on);
    addObject<PD1>(RSP_Z88_RSP_Z88_PD1_14, "PD1.14", HL7::optional, HL7::repetition_off);
    addObject<PID>(RSP_Z88_RSP_Z88_PID_15, "PID.15", HL7::initialized, HL7::repetition_off);
    addObject<ORC>(RSP_Z88_RSP_Z88_ORC_23, "ORC.23", HL7::initialized, HL7::repetition_off);
    addObject<RXC>(RSP_Z88_RSP_Z88_RXC_25, "RXC.25", HL7::optional, HL7::repetition_on);
    addObject<RXD>(RSP_Z88_RSP_Z88_RXD_26, "RXD.26", HL7::initialized, HL7::repetition_off);
    addObject<TQ1>(RSP_Z88_RSP_Z88_TQ1_27, "TQ1.27", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(RSP_Z88_RSP_Z88_TQ2_28, "TQ2.28", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(RSP_Z88_RSP_Z88_TQ1_29, "TQ1.29", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(RSP_Z88_RSP_Z88_TQ2_30, "TQ2.30", HL7::optional, HL7::repetition_on);
    addObject<NTE>(RSP_Z88_RSP_Z88_NTE_32, "NTE.32", HL7::optional, HL7::repetition_on);
    addObject<RXO>(RSP_Z88_RSP_Z88_RXO_34, "RXO.34", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(RSP_Z88_RSP_Z88_NTE_35, "NTE.35", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(RSP_Z88_RSP_Z88_TQ1_37, "TQ1.37", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(RSP_Z88_RSP_Z88_TQ2_38, "TQ2.38", HL7::optional, HL7::repetition_on);
    addObject<NTE>(RSP_Z88_RSP_Z88_NTE_40, "NTE.40", HL7::optional, HL7::repetition_on);
    addObject<RXO>(RSP_Z88_RSP_Z88_RXO_42, "RXO.42", HL7::initialized, HL7::repetition_off);
    addObject<RXC>(RSP_Z88_RSP_Z88_RXC_45, "RXC.45", HL7::optional, HL7::repetition_on);
    addObject<RXE>(RSP_Z88_RSP_Z88_RXE_46, "RXE.46", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(RSP_Z88_RSP_Z88_NTE_47, "NTE.47", HL7::optional, HL7::repetition_on);
    addObject<NTE>(RSP_Z88_RSP_Z88_NTE_49, "NTE.49", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(RSP_Z88_RSP_Z88_TQ1_51, "TQ1.51", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(RSP_Z88_RSP_Z88_TQ2_52, "TQ2.52", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(RSP_Z88_RSP_Z88_TQ1_53, "TQ1.53", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(RSP_Z88_RSP_Z88_TQ2_54, "TQ2.54", HL7::optional, HL7::repetition_on);
    addObject<NTE>(RSP_Z88_RSP_Z88_NTE_56, "NTE.56", HL7::optional, HL7::repetition_on);
    addObject<RXO>(RSP_Z88_RSP_Z88_RXO_58, "RXO.58", HL7::initialized, HL7::repetition_off);
    addObject<RXC>(RSP_Z88_RSP_Z88_RXC_61, "RXC.61", HL7::optional, HL7::repetition_on);
    addObject<RXE>(RSP_Z88_RSP_Z88_RXE_62, "RXE.62", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(RSP_Z88_RSP_Z88_NTE_63, "NTE.63", HL7::optional, HL7::repetition_on);
    addObject<OBX>(RSP_Z88_RSP_Z88_OBX_64, "OBX.64", HL7::optional, HL7::repetition_off);
    addObject<NTE>(RSP_Z88_RSP_Z88_NTE_65, "NTE.65", HL7::optional, HL7::repetition_on);
    addObject<NTE>(RSP_Z88_RSP_Z88_NTE_67, "NTE.67", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(RSP_Z88_RSP_Z88_TQ1_69, "TQ1.69", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(RSP_Z88_RSP_Z88_TQ2_70, "TQ2.70", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, RSP_Z88_RSP_Z88_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, RSP_Z88_RSP_Z88_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, RSP_Z88_RSP_Z88_UAC_3);
  }
  MSA* getMSA_4(size_t index = 0) {
    return (MSA*)this->getObjectSafe(index, RSP_Z88_RSP_Z88_MSA_4);
  }
  ERR* getERR_5(size_t index = 0) {
    return (ERR*)this->getObjectSafe(index, RSP_Z88_RSP_Z88_ERR_5);
  }
  QAK* getQAK_6(size_t index = 0) {
    return (QAK*)this->getObjectSafe(index, RSP_Z88_RSP_Z88_QAK_6);
  }
  QPD* getQPD_7(size_t index = 0) {
    return (QPD*)this->getObjectSafe(index, RSP_Z88_RSP_Z88_QPD_7);
  }
  RCP* getRCP_8(size_t index = 0) {
    return (RCP*)this->getObjectSafe(index, RSP_Z88_RSP_Z88_RCP_8);
  }
  DSC* getDSC_12(size_t index = 0) {
    return (DSC*)this->getObjectSafe(index, RSP_Z88_RSP_Z88_DSC_12);
  }
  NTE* getNTE_13(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RSP_Z88_RSP_Z88_NTE_13);
  }
  PD1* getPD1_14(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, RSP_Z88_RSP_Z88_PD1_14);
  }
  PID* getPID_15(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, RSP_Z88_RSP_Z88_PID_15);
  }
  ORC* getORC_23(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, RSP_Z88_RSP_Z88_ORC_23);
  }
  RXC* getRXC_25(size_t index = 0) {
    return (RXC*)this->getObjectSafe(index, RSP_Z88_RSP_Z88_RXC_25);
  }
  RXD* getRXD_26(size_t index = 0) {
    return (RXD*)this->getObjectSafe(index, RSP_Z88_RSP_Z88_RXD_26);
  }
  TQ1* getTQ1_27(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, RSP_Z88_RSP_Z88_TQ1_27);
  }
  TQ2* getTQ2_28(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, RSP_Z88_RSP_Z88_TQ2_28);
  }
  TQ1* getTQ1_29(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, RSP_Z88_RSP_Z88_TQ1_29);
  }
  TQ2* getTQ2_30(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, RSP_Z88_RSP_Z88_TQ2_30);
  }
  NTE* getNTE_32(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RSP_Z88_RSP_Z88_NTE_32);
  }
  RXO* getRXO_34(size_t index = 0) {
    return (RXO*)this->getObjectSafe(index, RSP_Z88_RSP_Z88_RXO_34);
  }
  NTE* getNTE_35(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RSP_Z88_RSP_Z88_NTE_35);
  }
  TQ1* getTQ1_37(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, RSP_Z88_RSP_Z88_TQ1_37);
  }
  TQ2* getTQ2_38(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, RSP_Z88_RSP_Z88_TQ2_38);
  }
  NTE* getNTE_40(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RSP_Z88_RSP_Z88_NTE_40);
  }
  RXO* getRXO_42(size_t index = 0) {
    return (RXO*)this->getObjectSafe(index, RSP_Z88_RSP_Z88_RXO_42);
  }
  RXC* getRXC_45(size_t index = 0) {
    return (RXC*)this->getObjectSafe(index, RSP_Z88_RSP_Z88_RXC_45);
  }
  RXE* getRXE_46(size_t index = 0) {
    return (RXE*)this->getObjectSafe(index, RSP_Z88_RSP_Z88_RXE_46);
  }
  NTE* getNTE_47(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RSP_Z88_RSP_Z88_NTE_47);
  }
  NTE* getNTE_49(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RSP_Z88_RSP_Z88_NTE_49);
  }
  TQ1* getTQ1_51(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, RSP_Z88_RSP_Z88_TQ1_51);
  }
  TQ2* getTQ2_52(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, RSP_Z88_RSP_Z88_TQ2_52);
  }
  TQ1* getTQ1_53(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, RSP_Z88_RSP_Z88_TQ1_53);
  }
  TQ2* getTQ2_54(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, RSP_Z88_RSP_Z88_TQ2_54);
  }
  NTE* getNTE_56(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RSP_Z88_RSP_Z88_NTE_56);
  }
  RXO* getRXO_58(size_t index = 0) {
    return (RXO*)this->getObjectSafe(index, RSP_Z88_RSP_Z88_RXO_58);
  }
  RXC* getRXC_61(size_t index = 0) {
    return (RXC*)this->getObjectSafe(index, RSP_Z88_RSP_Z88_RXC_61);
  }
  RXE* getRXE_62(size_t index = 0) {
    return (RXE*)this->getObjectSafe(index, RSP_Z88_RSP_Z88_RXE_62);
  }
  NTE* getNTE_63(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RSP_Z88_RSP_Z88_NTE_63);
  }
  OBX* getOBX_64(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, RSP_Z88_RSP_Z88_OBX_64);
  }
  NTE* getNTE_65(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RSP_Z88_RSP_Z88_NTE_65);
  }
  NTE* getNTE_67(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RSP_Z88_RSP_Z88_NTE_67);
  }
  TQ1* getTQ1_69(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, RSP_Z88_RSP_Z88_TQ1_69);
  }
  TQ2* getTQ2_70(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, RSP_Z88_RSP_Z88_TQ2_70);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z88_RSP_Z88_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z88_RSP_Z88_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z88_RSP_Z88_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMSA_4(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z88_RSP_Z88_MSA_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isERR_5(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z88_RSP_Z88_ERR_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQAK_6(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z88_RSP_Z88_QAK_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQPD_7(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z88_RSP_Z88_QPD_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRCP_8(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z88_RSP_Z88_RCP_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDSC_12(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z88_RSP_Z88_DSC_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_13(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z88_RSP_Z88_NTE_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_14(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z88_RSP_Z88_PD1_14) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_15(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z88_RSP_Z88_PID_15) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_23(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z88_RSP_Z88_ORC_23) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXC_25(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z88_RSP_Z88_RXC_25) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXD_26(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z88_RSP_Z88_RXD_26) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_27(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z88_RSP_Z88_TQ1_27) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_28(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z88_RSP_Z88_TQ2_28) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_29(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z88_RSP_Z88_TQ1_29) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_30(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z88_RSP_Z88_TQ2_30) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_32(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z88_RSP_Z88_NTE_32) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXO_34(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z88_RSP_Z88_RXO_34) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_35(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z88_RSP_Z88_NTE_35) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_37(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z88_RSP_Z88_TQ1_37) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_38(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z88_RSP_Z88_TQ2_38) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_40(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z88_RSP_Z88_NTE_40) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXO_42(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z88_RSP_Z88_RXO_42) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXC_45(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z88_RSP_Z88_RXC_45) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXE_46(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z88_RSP_Z88_RXE_46) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_47(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z88_RSP_Z88_NTE_47) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_49(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z88_RSP_Z88_NTE_49) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_51(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z88_RSP_Z88_TQ1_51) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_52(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z88_RSP_Z88_TQ2_52) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_53(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z88_RSP_Z88_TQ1_53) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_54(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z88_RSP_Z88_TQ2_54) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_56(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z88_RSP_Z88_NTE_56) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXO_58(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z88_RSP_Z88_RXO_58) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXC_61(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z88_RSP_Z88_RXC_61) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRXE_62(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z88_RSP_Z88_RXE_62) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_63(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z88_RSP_Z88_NTE_63) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_64(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z88_RSP_Z88_OBX_64) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_65(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z88_RSP_Z88_NTE_65) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_67(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z88_RSP_Z88_NTE_67) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_69(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z88_RSP_Z88_TQ1_69) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_70(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z88_RSP_Z88_TQ2_70) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RSP_Z88_RSP_Z88_ */
} /* namespace HL7_29 */
#endif /*  __RSP_Z88_RSP_Z88__29_H__ */
