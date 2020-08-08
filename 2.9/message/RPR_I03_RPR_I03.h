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


#ifndef __RPR_I03_RPR_I03__29_H__
#define __RPR_I03_RPR_I03__29_H__

#include "../../common/Util.h"
#include "../segment/CTD.h"
#include "../segment/MSA.h"
#include "../segment/MSH.h"
#include "../segment/NTE.h"
#include "../segment/PID.h"
#include "../segment/PRD.h"
#include "../segment/SFT.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/* Internal structures/groups */
struct RPR_I03_RPR_I03_PROVIDER; /* PROVIDER */

/*  */
struct RPR_I03_RPR_I03 : public HL7Message {
  RPR_I03_RPR_I03() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RPR_I03_RPR_I03_MSH_1,
    RPR_I03_RPR_I03_SFT_2,
    RPR_I03_RPR_I03_UAC_3,
    RPR_I03_RPR_I03_MSA_4,
    RPR_I03_RPR_I03_PID_6,
    RPR_I03_RPR_I03_NTE_7,
    RPR_I03_RPR_I03_CTD_8,
    RPR_I03_RPR_I03_PRD_9,
    FIELD_ID_MAX
  };

  const char* className() const { return "RPR_I03_RPR_I03"; }
  RPR_I03_RPR_I03* create() const { return new RPR_I03_RPR_I03(); }

 private:
  /* Initialize object */
  void init() {
    setName("RPR_I03_RPR_I03");
    addObject<MSH>(RPR_I03_RPR_I03_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(RPR_I03_RPR_I03_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(RPR_I03_RPR_I03_UAC_3, "UAC.3", HL7::optional, HL7::repetition_off);
    addObject<MSA>(RPR_I03_RPR_I03_MSA_4, "MSA.4", HL7::initialized, HL7::repetition_off);
    addObject<PID>(RPR_I03_RPR_I03_PID_6, "PID.6", HL7::optional, HL7::repetition_on);
    addObject<NTE>(RPR_I03_RPR_I03_NTE_7, "NTE.7", HL7::optional, HL7::repetition_on);
    addObject<CTD>(RPR_I03_RPR_I03_CTD_8, "CTD.8", HL7::optional, HL7::repetition_on);
    addObject<PRD>(RPR_I03_RPR_I03_PRD_9, "PRD.9", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, RPR_I03_RPR_I03_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, RPR_I03_RPR_I03_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, RPR_I03_RPR_I03_UAC_3);
  }
  MSA* getMSA_4(size_t index = 0) {
    return (MSA*)this->getObjectSafe(index, RPR_I03_RPR_I03_MSA_4);
  }
  PID* getPID_6(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, RPR_I03_RPR_I03_PID_6);
  }
  NTE* getNTE_7(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RPR_I03_RPR_I03_NTE_7);
  }
  CTD* getCTD_8(size_t index = 0) {
    return (CTD*)this->getObjectSafe(index, RPR_I03_RPR_I03_CTD_8);
  }
  PRD* getPRD_9(size_t index = 0) {
    return (PRD*)this->getObjectSafe(index, RPR_I03_RPR_I03_PRD_9);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, RPR_I03_RPR_I03_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, RPR_I03_RPR_I03_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, RPR_I03_RPR_I03_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMSA_4(size_t index = 0) {
    try {
      return this->getObject(index, RPR_I03_RPR_I03_MSA_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_6(size_t index = 0) {
    try {
      return this->getObject(index, RPR_I03_RPR_I03_PID_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_7(size_t index = 0) {
    try {
      return this->getObject(index, RPR_I03_RPR_I03_NTE_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCTD_8(size_t index = 0) {
    try {
      return this->getObject(index, RPR_I03_RPR_I03_CTD_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRD_9(size_t index = 0) {
    try {
      return this->getObject(index, RPR_I03_RPR_I03_PRD_9) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RPR_I03_RPR_I03_ */
} /* namespace HL7_29 */
#endif /*  __RPR_I03_RPR_I03__29_H__ */
