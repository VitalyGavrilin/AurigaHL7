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


#ifndef __SSU_U03_SSU_U03__29_H__
#define __SSU_U03_SSU_U03__29_H__

#include "../../common/Util.h"
#include "../segment/EQU.h"
#include "../segment/MSH.h"
#include "../segment/NTE.h"
#include "../segment/OBX.h"
#include "../segment/PRT.h"
#include "../segment/ROL.h"
#include "../segment/SAC.h"
#include "../segment/SFT.h"
#include "../segment/SPM.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/* Internal structures/groups */
struct SSU_U03_SSU_U03_SPECIMEN_CONTAINER; /* SPECIMEN_CONTAINER */
struct SSU_U03_SSU_U03_SPECIMEN; /* SPECIMEN */

/*  */
struct SSU_U03_SSU_U03 : public HL7Message {
  SSU_U03_SSU_U03() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    SSU_U03_SSU_U03_MSH_1,
    SSU_U03_SSU_U03_SFT_2,
    SSU_U03_SSU_U03_UAC_3,
    SSU_U03_SSU_U03_EQU_4,
    SSU_U03_SSU_U03_ROL_6,
    SSU_U03_SSU_U03_NTE_8,
    SSU_U03_SSU_U03_OBX_9,
    SSU_U03_SSU_U03_PRT_10,
    SSU_U03_SSU_U03_SAC_11,
    SSU_U03_SSU_U03_OBX_12,
    SSU_U03_SSU_U03_PRT_13,
    SSU_U03_SSU_U03_SPM_14,
    FIELD_ID_MAX
  };

  const char* className() const { return "SSU_U03_SSU_U03"; }
  SSU_U03_SSU_U03* create() const { return new SSU_U03_SSU_U03(); }

 private:
  /* Initialize object */
  void init() {
    setName("SSU_U03_SSU_U03");
    addObject<MSH>(SSU_U03_SSU_U03_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(SSU_U03_SSU_U03_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(SSU_U03_SSU_U03_UAC_3, "UAC.3", HL7::optional, HL7::repetition_off);
    addObject<EQU>(SSU_U03_SSU_U03_EQU_4, "EQU.4", HL7::initialized, HL7::repetition_off);
    addObject<ROL>(SSU_U03_SSU_U03_ROL_6, "ROL.6", HL7::optional, HL7::repetition_off);
    addObject<NTE>(SSU_U03_SSU_U03_NTE_8, "NTE.8", HL7::optional, HL7::repetition_on);
    addObject<OBX>(SSU_U03_SSU_U03_OBX_9, "OBX.9", HL7::optional, HL7::repetition_on);
    addObject<PRT>(SSU_U03_SSU_U03_PRT_10, "PRT.10", HL7::optional, HL7::repetition_on);
    addObject<SAC>(SSU_U03_SSU_U03_SAC_11, "SAC.11", HL7::initialized, HL7::repetition_off);
    addObject<OBX>(SSU_U03_SSU_U03_OBX_12, "OBX.12", HL7::optional, HL7::repetition_on);
    addObject<PRT>(SSU_U03_SSU_U03_PRT_13, "PRT.13", HL7::optional, HL7::repetition_on);
    addObject<SPM>(SSU_U03_SSU_U03_SPM_14, "SPM.14", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, SSU_U03_SSU_U03_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, SSU_U03_SSU_U03_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, SSU_U03_SSU_U03_UAC_3);
  }
  EQU* getEQU_4(size_t index = 0) {
    return (EQU*)this->getObjectSafe(index, SSU_U03_SSU_U03_EQU_4);
  }
  ROL* getROL_6(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, SSU_U03_SSU_U03_ROL_6);
  }
  NTE* getNTE_8(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, SSU_U03_SSU_U03_NTE_8);
  }
  OBX* getOBX_9(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, SSU_U03_SSU_U03_OBX_9);
  }
  PRT* getPRT_10(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, SSU_U03_SSU_U03_PRT_10);
  }
  SAC* getSAC_11(size_t index = 0) {
    return (SAC*)this->getObjectSafe(index, SSU_U03_SSU_U03_SAC_11);
  }
  OBX* getOBX_12(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, SSU_U03_SSU_U03_OBX_12);
  }
  PRT* getPRT_13(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, SSU_U03_SSU_U03_PRT_13);
  }
  SPM* getSPM_14(size_t index = 0) {
    return (SPM*)this->getObjectSafe(index, SSU_U03_SSU_U03_SPM_14);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, SSU_U03_SSU_U03_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, SSU_U03_SSU_U03_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, SSU_U03_SSU_U03_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isEQU_4(size_t index = 0) {
    try {
      return this->getObject(index, SSU_U03_SSU_U03_EQU_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_6(size_t index = 0) {
    try {
      return this->getObject(index, SSU_U03_SSU_U03_ROL_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_8(size_t index = 0) {
    try {
      return this->getObject(index, SSU_U03_SSU_U03_NTE_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_9(size_t index = 0) {
    try {
      return this->getObject(index, SSU_U03_SSU_U03_OBX_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_10(size_t index = 0) {
    try {
      return this->getObject(index, SSU_U03_SSU_U03_PRT_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSAC_11(size_t index = 0) {
    try {
      return this->getObject(index, SSU_U03_SSU_U03_SAC_11) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_12(size_t index = 0) {
    try {
      return this->getObject(index, SSU_U03_SSU_U03_OBX_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_13(size_t index = 0) {
    try {
      return this->getObject(index, SSU_U03_SSU_U03_PRT_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSPM_14(size_t index = 0) {
    try {
      return this->getObject(index, SSU_U03_SSU_U03_SPM_14) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* SSU_U03_SSU_U03_ */
} /* namespace HL7_29 */
#endif /*  __SSU_U03_SSU_U03__29_H__ */
