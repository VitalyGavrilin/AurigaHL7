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


#ifndef __EAR_U08_EAR_U08__29_H__
#define __EAR_U08_EAR_U08__29_H__

#include "../../common/Util.h"
#include "../segment/ECD.h"
#include "../segment/ECR.h"
#include "../segment/EQU.h"
#include "../segment/MSH.h"
#include "../segment/ROL.h"
#include "../segment/SAC.h"
#include "../segment/SFT.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/* Internal structures/groups */
struct EAR_U08_EAR_U08_COMMAND_RESPONSE; /* COMMAND_RESPONSE */
struct EAR_U08_EAR_U08_SPECIMEN_CONTAINER; /* SPECIMEN_CONTAINER */

/*  */
struct EAR_U08_EAR_U08 : public HL7Message {
  EAR_U08_EAR_U08() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    EAR_U08_EAR_U08_MSH_1,
    EAR_U08_EAR_U08_SFT_2,
    EAR_U08_EAR_U08_UAC_3,
    EAR_U08_EAR_U08_EQU_4,
    EAR_U08_EAR_U08_ROL_6,
    EAR_U08_EAR_U08_ECD_8,
    EAR_U08_EAR_U08_ECR_9,
    EAR_U08_EAR_U08_SAC_10,
    FIELD_ID_MAX
  };

  const char* className() const { return "EAR_U08_EAR_U08"; }
  EAR_U08_EAR_U08* create() const { return new EAR_U08_EAR_U08(); }

 private:
  /* Initialize object */
  void init() {
    setName("EAR_U08_EAR_U08");
    addObject<MSH>(EAR_U08_EAR_U08_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(EAR_U08_EAR_U08_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(EAR_U08_EAR_U08_UAC_3, "UAC.3", HL7::optional, HL7::repetition_off);
    addObject<EQU>(EAR_U08_EAR_U08_EQU_4, "EQU.4", HL7::initialized, HL7::repetition_off);
    addObject<ROL>(EAR_U08_EAR_U08_ROL_6, "ROL.6", HL7::optional, HL7::repetition_off);
    addObject<ECD>(EAR_U08_EAR_U08_ECD_8, "ECD.8", HL7::initialized, HL7::repetition_off);
    addObject<ECR>(EAR_U08_EAR_U08_ECR_9, "ECR.9", HL7::initialized, HL7::repetition_off);
    addObject<SAC>(EAR_U08_EAR_U08_SAC_10, "SAC.10", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, EAR_U08_EAR_U08_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, EAR_U08_EAR_U08_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, EAR_U08_EAR_U08_UAC_3);
  }
  EQU* getEQU_4(size_t index = 0) {
    return (EQU*)this->getObjectSafe(index, EAR_U08_EAR_U08_EQU_4);
  }
  ROL* getROL_6(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, EAR_U08_EAR_U08_ROL_6);
  }
  ECD* getECD_8(size_t index = 0) {
    return (ECD*)this->getObjectSafe(index, EAR_U08_EAR_U08_ECD_8);
  }
  ECR* getECR_9(size_t index = 0) {
    return (ECR*)this->getObjectSafe(index, EAR_U08_EAR_U08_ECR_9);
  }
  SAC* getSAC_10(size_t index = 0) {
    return (SAC*)this->getObjectSafe(index, EAR_U08_EAR_U08_SAC_10);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, EAR_U08_EAR_U08_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, EAR_U08_EAR_U08_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, EAR_U08_EAR_U08_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isEQU_4(size_t index = 0) {
    try {
      return this->getObject(index, EAR_U08_EAR_U08_EQU_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_6(size_t index = 0) {
    try {
      return this->getObject(index, EAR_U08_EAR_U08_ROL_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isECD_8(size_t index = 0) {
    try {
      return this->getObject(index, EAR_U08_EAR_U08_ECD_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isECR_9(size_t index = 0) {
    try {
      return this->getObject(index, EAR_U08_EAR_U08_ECR_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSAC_10(size_t index = 0) {
    try {
      return this->getObject(index, EAR_U08_EAR_U08_SAC_10) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* EAR_U08_EAR_U08_ */
} /* namespace HL7_29 */
#endif /*  __EAR_U08_EAR_U08__29_H__ */
