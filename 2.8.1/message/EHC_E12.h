/*
 * hacca - C Toolkit for the HL7 Protocol
 *
 * Warning: This file was automatically generated by [hawk], please do not edit.
 *          Thu 25 Jun 19:03:19 CEST 2020
 *
 * R. Carbone (rocco@tecsiel.it)
 * Jun 2020
 *
 * SPDX-License-Identifier: BSD-2-Clause-FreeBSD
 *
 * This file was developed as part of the ongoing activities related
 * to the design, implementation and execution of interoperability tests
 * between hacca-based versus AurigaHL7-based applications.
 *
 * In more details I decided to extend AurigaHL7 C++ Library with header files
 * implementing HL7 structures of the version 2.8.1 of the protocol (April 2014)
 * because the version 2.4 distributed with AurigaHL7 is a bit outdated (October 2000).
 *
 * All files in this fork was automatically generated by hacca-based tool [hawk]
 * and strictly follow the syntax and convention originally defined
 * by Auriga HL7 C++ Library just as form of continuity, convenience
 * and respect for their superb work.
 */


#ifndef __EHC_E12__281_H__
#define __EHC_E12__281_H__

#include "../../common/Util.h"
#include "../segment/CTD.h"
#include "../segment/IVC.h"
#include "../segment/MSH.h"
#include "../segment/NTE.h"
#include "../segment/OBR.h"
#include "../segment/OBX.h"
#include "../segment/PID.h"
#include "../segment/PSG.h"
#include "../segment/PSL.h"
#include "../segment/PSS.h"
#include "../segment/RFI.h"
#include "../segment/SFT.h"
#include "../segment/UAC.h"

namespace HL7_281 {

/* Internal structures/groups */
struct EHC_E12_REQUEST; /* REQUEST */

/* REQUEST */
struct EHC_E12_REQUEST : public HL7Group {
  EHC_E12_REQUEST() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    EHC_E12_CTD_1,
    EHC_E12_NTE_2,
    EHC_E12_OBR_3,
    EHC_E12_OBX_4,
    FIELD_ID_MAX
  };

  const char* className() const { return "EHC_E12_REQUEST"; }
  EHC_E12_REQUEST* create() const { return new EHC_E12_REQUEST(); }

 private:
  /* Initialize object */
  void init() {
    setName("EHC_E12.REQUEST");
    addObject<CTD>(EHC_E12_CTD_1, "CTD.1", HL7::optional, HL7::repetition_on);
    addObject<NTE>(EHC_E12_NTE_2, "NTE.2", HL7::optional, HL7::repetition_on);
    addObject<OBR>(EHC_E12_OBR_3, "OBR.3", HL7::optional, HL7::repetition_on);
    addObject<OBX>(EHC_E12_OBX_4, "OBX.4", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  CTD* getCTD_1(size_t index = 0) {
    return (CTD*)this->getObjectSafe(index, EHC_E12_CTD_1);
  }
  NTE* getNTE_2(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, EHC_E12_NTE_2);
  }
  OBR* getOBR_3(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, EHC_E12_OBR_3);
  }
  OBX* getOBX_4(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, EHC_E12_OBX_4);
  }

  /* Checker list */
  bool isCTD_1(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E12_CTD_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_2(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E12_NTE_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_3(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E12_OBR_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_4(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E12_OBX_4) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* EHC_E12_REQUEST */

/* EHC_E12 */
struct EHC_E12 : public HL7Message {
  EHC_E12() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    EHC_E12_MSH_1,
    EHC_E12_SFT_2,
    EHC_E12_UAC_3,
    EHC_E12_RFI_4,
    EHC_E12_CTD_5,
    EHC_E12_IVC_6,
    EHC_E12_PSS_7,
    EHC_E12_PSG_8,
    EHC_E12_PID_9,
    EHC_E12_PSL_10,
    EHC_E12_CTD_12,
    EHC_E12_OBR_13,
    EHC_E12_NTE_14,
    EHC_E12_OBX_15,
    FIELD_ID_MAX
  };

  const char* className() const { return "EHC_E12"; }
  EHC_E12* create() const { return new EHC_E12(); }

 private:
  /* Initialize object */
  void init() {
    setName("EHC_E12");
    addObject<MSH>(EHC_E12_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(EHC_E12_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(EHC_E12_UAC_3, "UAC.3", HL7::optional, HL7::repetition_on);
    addObject<RFI>(EHC_E12_RFI_4, "RFI.4", HL7::initialized, HL7::repetition_off);
    addObject<CTD>(EHC_E12_CTD_5, "CTD.5", HL7::optional, HL7::repetition_on);
    addObject<IVC>(EHC_E12_IVC_6, "IVC.6", HL7::initialized, HL7::repetition_off);
    addObject<PSS>(EHC_E12_PSS_7, "PSS.7", HL7::initialized, HL7::repetition_off);
    addObject<PSG>(EHC_E12_PSG_8, "PSG.8", HL7::initialized, HL7::repetition_off);
    addObject<PID>(EHC_E12_PID_9, "PID.9", HL7::optional, HL7::repetition_off);
    addObject<PSL>(EHC_E12_PSL_10, "PSL.10", HL7::optional, HL7::repetition_on);
    addObject<CTD>(EHC_E12_CTD_12, "CTD.12", HL7::optional, HL7::repetition_off);
    addObject<OBR>(EHC_E12_OBR_13, "OBR.13", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(EHC_E12_NTE_14, "NTE.14", HL7::optional, HL7::repetition_off);
    addObject<OBX>(EHC_E12_OBX_15, "OBX.15", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, EHC_E12_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, EHC_E12_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, EHC_E12_UAC_3);
  }
  RFI* getRFI_4(size_t index = 0) {
    return (RFI*)this->getObjectSafe(index, EHC_E12_RFI_4);
  }
  CTD* getCTD_5(size_t index = 0) {
    return (CTD*)this->getObjectSafe(index, EHC_E12_CTD_5);
  }
  IVC* getIVC_6(size_t index = 0) {
    return (IVC*)this->getObjectSafe(index, EHC_E12_IVC_6);
  }
  PSS* getPSS_7(size_t index = 0) {
    return (PSS*)this->getObjectSafe(index, EHC_E12_PSS_7);
  }
  PSG* getPSG_8(size_t index = 0) {
    return (PSG*)this->getObjectSafe(index, EHC_E12_PSG_8);
  }
  PID* getPID_9(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, EHC_E12_PID_9);
  }
  PSL* getPSL_10(size_t index = 0) {
    return (PSL*)this->getObjectSafe(index, EHC_E12_PSL_10);
  }
  CTD* getCTD_12(size_t index = 0) {
    return (CTD*)this->getObjectSafe(index, EHC_E12_CTD_12);
  }
  OBR* getOBR_13(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, EHC_E12_OBR_13);
  }
  NTE* getNTE_14(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, EHC_E12_NTE_14);
  }
  OBX* getOBX_15(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, EHC_E12_OBX_15);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E12_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E12_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E12_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRFI_4(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E12_RFI_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCTD_5(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E12_CTD_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIVC_6(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E12_IVC_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPSS_7(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E12_PSS_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPSG_8(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E12_PSG_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_9(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E12_PID_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPSL_10(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E12_PSL_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCTD_12(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E12_CTD_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_13(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E12_OBR_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_14(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E12_NTE_14) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_15(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E12_OBX_15) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* EHC_E12_ */
} /* namespace HL7_281 */
#endif /*  __EHC_E12__281_H__ */