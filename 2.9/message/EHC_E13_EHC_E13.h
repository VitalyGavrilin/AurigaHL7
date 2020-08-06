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


#ifndef __EHC_E13_EHC_E13__29_H__
#define __EHC_E13_EHC_E13__29_H__

#include "../../common/Util.h"
#include "../segment/CTD.h"
#include "../segment/IVC.h"
#include "../segment/MSA.h"
#include "../segment/MSH.h"
#include "../segment/NTE.h"
#include "../segment/OBR.h"
#include "../segment/OBX.h"
#include "../segment/PID.h"
#include "../segment/PRT.h"
#include "../segment/PSG.h"
#include "../segment/PSL.h"
#include "../segment/PSS.h"
#include "../segment/RFI.h"
#include "../segment/SFT.h"
#include "../segment/TXA.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/* Internal structures/groups */
struct EHC_E13_EHC_E13_REQUEST; /* REQUEST */
struct EHC_E13_EHC_E13_RESPONSE; /* RESPONSE */

/*  */
struct EHC_E13_EHC_E13 : public HL7Message {
  EHC_E13_EHC_E13() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    EHC_E13_EHC_E13_MSH_1,
    EHC_E13_EHC_E13_SFT_2,
    EHC_E13_EHC_E13_UAC_3,
    EHC_E13_EHC_E13_MSA_4,
    EHC_E13_EHC_E13_RFI_6,
    EHC_E13_EHC_E13_IVC_8,
    EHC_E13_EHC_E13_PSS_9,
    EHC_E13_EHC_E13_PSG_10,
    EHC_E13_EHC_E13_PID_11,
    EHC_E13_EHC_E13_PRT_12,
    EHC_E13_EHC_E13_PSL_13,
    EHC_E13_EHC_E13_CTD_16,
    EHC_E13_EHC_E13_NTE_17,
    EHC_E13_EHC_E13_OBR_18,
    EHC_E13_EHC_E13_PRT_19,
    EHC_E13_EHC_E13_NTE_20,
    EHC_E13_EHC_E13_OBX_21,
    EHC_E13_EHC_E13_PRT_22,
    EHC_E13_EHC_E13_TXA_23,
    FIELD_ID_MAX
  };

  const char* className() const { return "EHC_E13_EHC_E13"; }
  EHC_E13_EHC_E13* create() const { return new EHC_E13_EHC_E13(); }

 private:
  /* Initialize object */
  void init() {
    setName("EHC_E13_EHC_E13");
    addObject<MSH>(EHC_E13_EHC_E13_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(EHC_E13_EHC_E13_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(EHC_E13_EHC_E13_UAC_3, "UAC.3", HL7::optional, HL7::repetition_on);
    addObject<MSA>(EHC_E13_EHC_E13_MSA_4, "MSA.4", HL7::initialized, HL7::repetition_off);
    addObject<RFI>(EHC_E13_EHC_E13_RFI_6, "RFI.6", HL7::initialized, HL7::repetition_off);
    addObject<IVC>(EHC_E13_EHC_E13_IVC_8, "IVC.8", HL7::initialized, HL7::repetition_off);
    addObject<PSS>(EHC_E13_EHC_E13_PSS_9, "PSS.9", HL7::initialized, HL7::repetition_off);
    addObject<PSG>(EHC_E13_EHC_E13_PSG_10, "PSG.10", HL7::initialized, HL7::repetition_off);
    addObject<PID>(EHC_E13_EHC_E13_PID_11, "PID.11", HL7::optional, HL7::repetition_off);
    addObject<PRT>(EHC_E13_EHC_E13_PRT_12, "PRT.12", HL7::optional, HL7::repetition_on);
    addObject<PSL>(EHC_E13_EHC_E13_PSL_13, "PSL.13", HL7::optional, HL7::repetition_off);
    addObject<CTD>(EHC_E13_EHC_E13_CTD_16, "CTD.16", HL7::optional, HL7::repetition_off);
    addObject<NTE>(EHC_E13_EHC_E13_NTE_17, "NTE.17", HL7::optional, HL7::repetition_off);
    addObject<OBR>(EHC_E13_EHC_E13_OBR_18, "OBR.18", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(EHC_E13_EHC_E13_PRT_19, "PRT.19", HL7::optional, HL7::repetition_on);
    addObject<NTE>(EHC_E13_EHC_E13_NTE_20, "NTE.20", HL7::optional, HL7::repetition_off);
    addObject<OBX>(EHC_E13_EHC_E13_OBX_21, "OBX.21", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(EHC_E13_EHC_E13_PRT_22, "PRT.22", HL7::optional, HL7::repetition_on);
    addObject<TXA>(EHC_E13_EHC_E13_TXA_23, "TXA.23", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, EHC_E13_EHC_E13_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, EHC_E13_EHC_E13_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, EHC_E13_EHC_E13_UAC_3);
  }
  MSA* getMSA_4(size_t index = 0) {
    return (MSA*)this->getObjectSafe(index, EHC_E13_EHC_E13_MSA_4);
  }
  RFI* getRFI_6(size_t index = 0) {
    return (RFI*)this->getObjectSafe(index, EHC_E13_EHC_E13_RFI_6);
  }
  IVC* getIVC_8(size_t index = 0) {
    return (IVC*)this->getObjectSafe(index, EHC_E13_EHC_E13_IVC_8);
  }
  PSS* getPSS_9(size_t index = 0) {
    return (PSS*)this->getObjectSafe(index, EHC_E13_EHC_E13_PSS_9);
  }
  PSG* getPSG_10(size_t index = 0) {
    return (PSG*)this->getObjectSafe(index, EHC_E13_EHC_E13_PSG_10);
  }
  PID* getPID_11(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, EHC_E13_EHC_E13_PID_11);
  }
  PRT* getPRT_12(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, EHC_E13_EHC_E13_PRT_12);
  }
  PSL* getPSL_13(size_t index = 0) {
    return (PSL*)this->getObjectSafe(index, EHC_E13_EHC_E13_PSL_13);
  }
  CTD* getCTD_16(size_t index = 0) {
    return (CTD*)this->getObjectSafe(index, EHC_E13_EHC_E13_CTD_16);
  }
  NTE* getNTE_17(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, EHC_E13_EHC_E13_NTE_17);
  }
  OBR* getOBR_18(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, EHC_E13_EHC_E13_OBR_18);
  }
  PRT* getPRT_19(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, EHC_E13_EHC_E13_PRT_19);
  }
  NTE* getNTE_20(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, EHC_E13_EHC_E13_NTE_20);
  }
  OBX* getOBX_21(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, EHC_E13_EHC_E13_OBX_21);
  }
  PRT* getPRT_22(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, EHC_E13_EHC_E13_PRT_22);
  }
  TXA* getTXA_23(size_t index = 0) {
    return (TXA*)this->getObjectSafe(index, EHC_E13_EHC_E13_TXA_23);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E13_EHC_E13_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E13_EHC_E13_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E13_EHC_E13_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMSA_4(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E13_EHC_E13_MSA_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRFI_6(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E13_EHC_E13_RFI_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIVC_8(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E13_EHC_E13_IVC_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPSS_9(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E13_EHC_E13_PSS_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPSG_10(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E13_EHC_E13_PSG_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_11(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E13_EHC_E13_PID_11) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_12(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E13_EHC_E13_PRT_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPSL_13(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E13_EHC_E13_PSL_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCTD_16(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E13_EHC_E13_CTD_16) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_17(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E13_EHC_E13_NTE_17) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_18(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E13_EHC_E13_OBR_18) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_19(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E13_EHC_E13_PRT_19) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_20(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E13_EHC_E13_NTE_20) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_21(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E13_EHC_E13_OBX_21) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_22(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E13_EHC_E13_PRT_22) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTXA_23(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E13_EHC_E13_TXA_23) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* EHC_E13_EHC_E13_ */
} /* namespace HL7_29 */
#endif /*  __EHC_E13_EHC_E13__29_H__ */
