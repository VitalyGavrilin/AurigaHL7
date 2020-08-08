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


#ifndef __EAC_U07_EAC_U07__29_H__
#define __EAC_U07_EAC_U07__29_H__

#include "../../common/Util.h"
#include "../segment/CNS.h"
#include "../segment/DST.h"
#include "../segment/ECD.h"
#include "../segment/EQU.h"
#include "../segment/MSH.h"
#include "../segment/OBR.h"
#include "../segment/PRT.h"
#include "../segment/ROL.h"
#include "../segment/SAC.h"
#include "../segment/SFT.h"
#include "../segment/SPM.h"
#include "../segment/TQ1.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/* Internal structures/groups */
struct EAC_U07_EAC_U07_COMMAND; /* COMMAND */
struct EAC_U07_EAC_U07_SPECIMEN_CONTAINER; /* SPECIMEN_CONTAINER */
struct EAC_U07_EAC_U07_ORDER_FOR_SPECIMEN_CONTAINER; /* ORDER_FOR_SPECIMEN_CONTAINER */

/*  */
struct EAC_U07_EAC_U07 : public HL7Message {
  EAC_U07_EAC_U07() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    EAC_U07_EAC_U07_MSH_1,
    EAC_U07_EAC_U07_SFT_2,
    EAC_U07_EAC_U07_UAC_3,
    EAC_U07_EAC_U07_EQU_4,
    EAC_U07_EAC_U07_ROL_6,
    EAC_U07_EAC_U07_CNS_8,
    EAC_U07_EAC_U07_ECD_9,
    EAC_U07_EAC_U07_TQ1_10,
    EAC_U07_EAC_U07_DST_12,
    EAC_U07_EAC_U07_SAC_13,
    EAC_U07_EAC_U07_SPM_14,
    EAC_U07_EAC_U07_OBR_15,
    EAC_U07_EAC_U07_PRT_16,
    FIELD_ID_MAX
  };

  const char* className() const { return "EAC_U07_EAC_U07"; }
  EAC_U07_EAC_U07* create() const { return new EAC_U07_EAC_U07(); }

 private:
  /* Initialize object */
  void init() {
    setName("EAC_U07_EAC_U07");
    addObject<MSH>(EAC_U07_EAC_U07_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(EAC_U07_EAC_U07_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(EAC_U07_EAC_U07_UAC_3, "UAC.3", HL7::optional, HL7::repetition_off);
    addObject<EQU>(EAC_U07_EAC_U07_EQU_4, "EQU.4", HL7::initialized, HL7::repetition_off);
    addObject<ROL>(EAC_U07_EAC_U07_ROL_6, "ROL.6", HL7::optional, HL7::repetition_off);
    addObject<CNS>(EAC_U07_EAC_U07_CNS_8, "CNS.8", HL7::optional, HL7::repetition_off);
    addObject<ECD>(EAC_U07_EAC_U07_ECD_9, "ECD.9", HL7::initialized, HL7::repetition_off);
    addObject<TQ1>(EAC_U07_EAC_U07_TQ1_10, "TQ1.10", HL7::optional, HL7::repetition_off);
    addObject<DST>(EAC_U07_EAC_U07_DST_12, "DST.12", HL7::optional, HL7::repetition_on);
    addObject<SAC>(EAC_U07_EAC_U07_SAC_13, "SAC.13", HL7::initialized, HL7::repetition_off);
    addObject<SPM>(EAC_U07_EAC_U07_SPM_14, "SPM.14", HL7::optional, HL7::repetition_on);
    addObject<OBR>(EAC_U07_EAC_U07_OBR_15, "OBR.15", HL7::optional, HL7::repetition_on);
    addObject<PRT>(EAC_U07_EAC_U07_PRT_16, "PRT.16", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, EAC_U07_EAC_U07_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, EAC_U07_EAC_U07_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, EAC_U07_EAC_U07_UAC_3);
  }
  EQU* getEQU_4(size_t index = 0) {
    return (EQU*)this->getObjectSafe(index, EAC_U07_EAC_U07_EQU_4);
  }
  ROL* getROL_6(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, EAC_U07_EAC_U07_ROL_6);
  }
  CNS* getCNS_8(size_t index = 0) {
    return (CNS*)this->getObjectSafe(index, EAC_U07_EAC_U07_CNS_8);
  }
  ECD* getECD_9(size_t index = 0) {
    return (ECD*)this->getObjectSafe(index, EAC_U07_EAC_U07_ECD_9);
  }
  TQ1* getTQ1_10(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, EAC_U07_EAC_U07_TQ1_10);
  }
  DST* getDST_12(size_t index = 0) {
    return (DST*)this->getObjectSafe(index, EAC_U07_EAC_U07_DST_12);
  }
  SAC* getSAC_13(size_t index = 0) {
    return (SAC*)this->getObjectSafe(index, EAC_U07_EAC_U07_SAC_13);
  }
  SPM* getSPM_14(size_t index = 0) {
    return (SPM*)this->getObjectSafe(index, EAC_U07_EAC_U07_SPM_14);
  }
  OBR* getOBR_15(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, EAC_U07_EAC_U07_OBR_15);
  }
  PRT* getPRT_16(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, EAC_U07_EAC_U07_PRT_16);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, EAC_U07_EAC_U07_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, EAC_U07_EAC_U07_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, EAC_U07_EAC_U07_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isEQU_4(size_t index = 0) {
    try {
      return this->getObject(index, EAC_U07_EAC_U07_EQU_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_6(size_t index = 0) {
    try {
      return this->getObject(index, EAC_U07_EAC_U07_ROL_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCNS_8(size_t index = 0) {
    try {
      return this->getObject(index, EAC_U07_EAC_U07_CNS_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isECD_9(size_t index = 0) {
    try {
      return this->getObject(index, EAC_U07_EAC_U07_ECD_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_10(size_t index = 0) {
    try {
      return this->getObject(index, EAC_U07_EAC_U07_TQ1_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDST_12(size_t index = 0) {
    try {
      return this->getObject(index, EAC_U07_EAC_U07_DST_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSAC_13(size_t index = 0) {
    try {
      return this->getObject(index, EAC_U07_EAC_U07_SAC_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSPM_14(size_t index = 0) {
    try {
      return this->getObject(index, EAC_U07_EAC_U07_SPM_14) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_15(size_t index = 0) {
    try {
      return this->getObject(index, EAC_U07_EAC_U07_OBR_15) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_16(size_t index = 0) {
    try {
      return this->getObject(index, EAC_U07_EAC_U07_PRT_16) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* EAC_U07_EAC_U07_ */
} /* namespace HL7_29 */
#endif /*  __EAC_U07_EAC_U07__29_H__ */
