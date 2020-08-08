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


#ifndef __ORD_O04_ORD_O04__29_H__
#define __ORD_O04_ORD_O04__29_H__

#include "../../common/Util.h"
#include "../segment/ARV.h"
#include "../segment/ERR.h"
#include "../segment/MSA.h"
#include "../segment/MSH.h"
#include "../segment/NTE.h"
#include "../segment/ODS.h"
#include "../segment/ODT.h"
#include "../segment/ORC.h"
#include "../segment/PID.h"
#include "../segment/SFT.h"
#include "../segment/TQ1.h"
#include "../segment/TQ2.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/* Internal structures/groups */
struct ORD_O04_ORD_O04_RESPONSE; /* RESPONSE */
struct ORD_O04_ORD_O04_PATIENT; /* PATIENT */
struct ORD_O04_ORD_O04_ORDER_DIET; /* ORDER_DIET */
struct ORD_O04_ORD_O04_ORDER_TRAY; /* ORDER_TRAY */
struct ORD_O04_ORD_O04_TIMING_DIET; /* TIMING_DIET */
struct ORD_O04_ORD_O04_TIMING_DIET; /* TIMING_DIET */
struct ORD_O04_ORD_O04_TIMING_TRAY; /* TIMING_TRAY */

/*  */
struct ORD_O04_ORD_O04 : public HL7Message {
  ORD_O04_ORD_O04() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    ORD_O04_ORD_O04_MSH_1,
    ORD_O04_ORD_O04_MSA_2,
    ORD_O04_ORD_O04_ARV_3,
    ORD_O04_ORD_O04_ERR_4,
    ORD_O04_ORD_O04_SFT_5,
    ORD_O04_ORD_O04_UAC_6,
    ORD_O04_ORD_O04_NTE_7,
    ORD_O04_ORD_O04_ARV_12,
    ORD_O04_ORD_O04_NTE_13,
    ORD_O04_ORD_O04_PID_14,
    ORD_O04_ORD_O04_ARV_16,
    ORD_O04_ORD_O04_NTE_17,
    ORD_O04_ORD_O04_PID_18,
    ORD_O04_ORD_O04_NTE_21,
    ORD_O04_ORD_O04_ODS_22,
    ORD_O04_ORD_O04_ORC_23,
    ORD_O04_ORD_O04_TQ1_25,
    ORD_O04_ORD_O04_TQ2_26,
    ORD_O04_ORD_O04_ARV_27,
    ORD_O04_ORD_O04_NTE_28,
    ORD_O04_ORD_O04_PID_29,
    ORD_O04_ORD_O04_NTE_32,
    ORD_O04_ORD_O04_ODS_33,
    ORD_O04_ORD_O04_ORC_34,
    ORD_O04_ORD_O04_NTE_37,
    ORD_O04_ORD_O04_ODT_38,
    ORD_O04_ORD_O04_ORC_39,
    ORD_O04_ORD_O04_TQ1_41,
    ORD_O04_ORD_O04_TQ2_42,
    ORD_O04_ORD_O04_TQ1_43,
    ORD_O04_ORD_O04_TQ2_44,
    ORD_O04_ORD_O04_TQ1_45,
    ORD_O04_ORD_O04_TQ2_46,
    FIELD_ID_MAX
  };

  const char* className() const { return "ORD_O04_ORD_O04"; }
  ORD_O04_ORD_O04* create() const { return new ORD_O04_ORD_O04(); }

 private:
  /* Initialize object */
  void init() {
    setName("ORD_O04_ORD_O04");
    addObject<MSH>(ORD_O04_ORD_O04_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<MSA>(ORD_O04_ORD_O04_MSA_2, "MSA.2", HL7::initialized, HL7::repetition_off);
    addObject<ARV>(ORD_O04_ORD_O04_ARV_3, "ARV.3", HL7::optional, HL7::repetition_on);
    addObject<ERR>(ORD_O04_ORD_O04_ERR_4, "ERR.4", HL7::optional, HL7::repetition_on);
    addObject<SFT>(ORD_O04_ORD_O04_SFT_5, "SFT.5", HL7::optional, HL7::repetition_on);
    addObject<UAC>(ORD_O04_ORD_O04_UAC_6, "UAC.6", HL7::optional, HL7::repetition_off);
    addObject<NTE>(ORD_O04_ORD_O04_NTE_7, "NTE.7", HL7::optional, HL7::repetition_on);
    addObject<ARV>(ORD_O04_ORD_O04_ARV_12, "ARV.12", HL7::optional, HL7::repetition_on);
    addObject<NTE>(ORD_O04_ORD_O04_NTE_13, "NTE.13", HL7::optional, HL7::repetition_on);
    addObject<PID>(ORD_O04_ORD_O04_PID_14, "PID.14", HL7::initialized, HL7::repetition_off);
    addObject<ARV>(ORD_O04_ORD_O04_ARV_16, "ARV.16", HL7::optional, HL7::repetition_on);
    addObject<NTE>(ORD_O04_ORD_O04_NTE_17, "NTE.17", HL7::optional, HL7::repetition_on);
    addObject<PID>(ORD_O04_ORD_O04_PID_18, "PID.18", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(ORD_O04_ORD_O04_NTE_21, "NTE.21", HL7::optional, HL7::repetition_on);
    addObject<ODS>(ORD_O04_ORD_O04_ODS_22, "ODS.22", HL7::optional, HL7::repetition_on);
    addObject<ORC>(ORD_O04_ORD_O04_ORC_23, "ORC.23", HL7::initialized, HL7::repetition_off);
    addObject<TQ1>(ORD_O04_ORD_O04_TQ1_25, "TQ1.25", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(ORD_O04_ORD_O04_TQ2_26, "TQ2.26", HL7::optional, HL7::repetition_on);
    addObject<ARV>(ORD_O04_ORD_O04_ARV_27, "ARV.27", HL7::optional, HL7::repetition_on);
    addObject<NTE>(ORD_O04_ORD_O04_NTE_28, "NTE.28", HL7::optional, HL7::repetition_on);
    addObject<PID>(ORD_O04_ORD_O04_PID_29, "PID.29", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(ORD_O04_ORD_O04_NTE_32, "NTE.32", HL7::optional, HL7::repetition_on);
    addObject<ODS>(ORD_O04_ORD_O04_ODS_33, "ODS.33", HL7::optional, HL7::repetition_on);
    addObject<ORC>(ORD_O04_ORD_O04_ORC_34, "ORC.34", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(ORD_O04_ORD_O04_NTE_37, "NTE.37", HL7::optional, HL7::repetition_on);
    addObject<ODT>(ORD_O04_ORD_O04_ODT_38, "ODT.38", HL7::optional, HL7::repetition_on);
    addObject<ORC>(ORD_O04_ORD_O04_ORC_39, "ORC.39", HL7::initialized, HL7::repetition_off);
    addObject<TQ1>(ORD_O04_ORD_O04_TQ1_41, "TQ1.41", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(ORD_O04_ORD_O04_TQ2_42, "TQ2.42", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(ORD_O04_ORD_O04_TQ1_43, "TQ1.43", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(ORD_O04_ORD_O04_TQ2_44, "TQ2.44", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(ORD_O04_ORD_O04_TQ1_45, "TQ1.45", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(ORD_O04_ORD_O04_TQ2_46, "TQ2.46", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, ORD_O04_ORD_O04_MSH_1);
  }
  MSA* getMSA_2(size_t index = 0) {
    return (MSA*)this->getObjectSafe(index, ORD_O04_ORD_O04_MSA_2);
  }
  ARV* getARV_3(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, ORD_O04_ORD_O04_ARV_3);
  }
  ERR* getERR_4(size_t index = 0) {
    return (ERR*)this->getObjectSafe(index, ORD_O04_ORD_O04_ERR_4);
  }
  SFT* getSFT_5(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, ORD_O04_ORD_O04_SFT_5);
  }
  UAC* getUAC_6(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, ORD_O04_ORD_O04_UAC_6);
  }
  NTE* getNTE_7(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, ORD_O04_ORD_O04_NTE_7);
  }
  ARV* getARV_12(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, ORD_O04_ORD_O04_ARV_12);
  }
  NTE* getNTE_13(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, ORD_O04_ORD_O04_NTE_13);
  }
  PID* getPID_14(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, ORD_O04_ORD_O04_PID_14);
  }
  ARV* getARV_16(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, ORD_O04_ORD_O04_ARV_16);
  }
  NTE* getNTE_17(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, ORD_O04_ORD_O04_NTE_17);
  }
  PID* getPID_18(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, ORD_O04_ORD_O04_PID_18);
  }
  NTE* getNTE_21(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, ORD_O04_ORD_O04_NTE_21);
  }
  ODS* getODS_22(size_t index = 0) {
    return (ODS*)this->getObjectSafe(index, ORD_O04_ORD_O04_ODS_22);
  }
  ORC* getORC_23(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, ORD_O04_ORD_O04_ORC_23);
  }
  TQ1* getTQ1_25(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, ORD_O04_ORD_O04_TQ1_25);
  }
  TQ2* getTQ2_26(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, ORD_O04_ORD_O04_TQ2_26);
  }
  ARV* getARV_27(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, ORD_O04_ORD_O04_ARV_27);
  }
  NTE* getNTE_28(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, ORD_O04_ORD_O04_NTE_28);
  }
  PID* getPID_29(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, ORD_O04_ORD_O04_PID_29);
  }
  NTE* getNTE_32(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, ORD_O04_ORD_O04_NTE_32);
  }
  ODS* getODS_33(size_t index = 0) {
    return (ODS*)this->getObjectSafe(index, ORD_O04_ORD_O04_ODS_33);
  }
  ORC* getORC_34(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, ORD_O04_ORD_O04_ORC_34);
  }
  NTE* getNTE_37(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, ORD_O04_ORD_O04_NTE_37);
  }
  ODT* getODT_38(size_t index = 0) {
    return (ODT*)this->getObjectSafe(index, ORD_O04_ORD_O04_ODT_38);
  }
  ORC* getORC_39(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, ORD_O04_ORD_O04_ORC_39);
  }
  TQ1* getTQ1_41(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, ORD_O04_ORD_O04_TQ1_41);
  }
  TQ2* getTQ2_42(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, ORD_O04_ORD_O04_TQ2_42);
  }
  TQ1* getTQ1_43(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, ORD_O04_ORD_O04_TQ1_43);
  }
  TQ2* getTQ2_44(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, ORD_O04_ORD_O04_TQ2_44);
  }
  TQ1* getTQ1_45(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, ORD_O04_ORD_O04_TQ1_45);
  }
  TQ2* getTQ2_46(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, ORD_O04_ORD_O04_TQ2_46);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, ORD_O04_ORD_O04_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMSA_2(size_t index = 0) {
    try {
      return this->getObject(index, ORD_O04_ORD_O04_MSA_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_3(size_t index = 0) {
    try {
      return this->getObject(index, ORD_O04_ORD_O04_ARV_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isERR_4(size_t index = 0) {
    try {
      return this->getObject(index, ORD_O04_ORD_O04_ERR_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_5(size_t index = 0) {
    try {
      return this->getObject(index, ORD_O04_ORD_O04_SFT_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_6(size_t index = 0) {
    try {
      return this->getObject(index, ORD_O04_ORD_O04_UAC_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_7(size_t index = 0) {
    try {
      return this->getObject(index, ORD_O04_ORD_O04_NTE_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_12(size_t index = 0) {
    try {
      return this->getObject(index, ORD_O04_ORD_O04_ARV_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_13(size_t index = 0) {
    try {
      return this->getObject(index, ORD_O04_ORD_O04_NTE_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_14(size_t index = 0) {
    try {
      return this->getObject(index, ORD_O04_ORD_O04_PID_14) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_16(size_t index = 0) {
    try {
      return this->getObject(index, ORD_O04_ORD_O04_ARV_16) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_17(size_t index = 0) {
    try {
      return this->getObject(index, ORD_O04_ORD_O04_NTE_17) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_18(size_t index = 0) {
    try {
      return this->getObject(index, ORD_O04_ORD_O04_PID_18) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_21(size_t index = 0) {
    try {
      return this->getObject(index, ORD_O04_ORD_O04_NTE_21) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isODS_22(size_t index = 0) {
    try {
      return this->getObject(index, ORD_O04_ORD_O04_ODS_22) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_23(size_t index = 0) {
    try {
      return this->getObject(index, ORD_O04_ORD_O04_ORC_23) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_25(size_t index = 0) {
    try {
      return this->getObject(index, ORD_O04_ORD_O04_TQ1_25) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_26(size_t index = 0) {
    try {
      return this->getObject(index, ORD_O04_ORD_O04_TQ2_26) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_27(size_t index = 0) {
    try {
      return this->getObject(index, ORD_O04_ORD_O04_ARV_27) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_28(size_t index = 0) {
    try {
      return this->getObject(index, ORD_O04_ORD_O04_NTE_28) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_29(size_t index = 0) {
    try {
      return this->getObject(index, ORD_O04_ORD_O04_PID_29) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_32(size_t index = 0) {
    try {
      return this->getObject(index, ORD_O04_ORD_O04_NTE_32) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isODS_33(size_t index = 0) {
    try {
      return this->getObject(index, ORD_O04_ORD_O04_ODS_33) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_34(size_t index = 0) {
    try {
      return this->getObject(index, ORD_O04_ORD_O04_ORC_34) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_37(size_t index = 0) {
    try {
      return this->getObject(index, ORD_O04_ORD_O04_NTE_37) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isODT_38(size_t index = 0) {
    try {
      return this->getObject(index, ORD_O04_ORD_O04_ODT_38) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_39(size_t index = 0) {
    try {
      return this->getObject(index, ORD_O04_ORD_O04_ORC_39) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_41(size_t index = 0) {
    try {
      return this->getObject(index, ORD_O04_ORD_O04_TQ1_41) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_42(size_t index = 0) {
    try {
      return this->getObject(index, ORD_O04_ORD_O04_TQ2_42) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_43(size_t index = 0) {
    try {
      return this->getObject(index, ORD_O04_ORD_O04_TQ1_43) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_44(size_t index = 0) {
    try {
      return this->getObject(index, ORD_O04_ORD_O04_TQ2_44) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_45(size_t index = 0) {
    try {
      return this->getObject(index, ORD_O04_ORD_O04_TQ1_45) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_46(size_t index = 0) {
    try {
      return this->getObject(index, ORD_O04_ORD_O04_TQ2_46) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ORD_O04_ORD_O04_ */
} /* namespace HL7_29 */
#endif /*  __ORD_O04_ORD_O04__29_H__ */
