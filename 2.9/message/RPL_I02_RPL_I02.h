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


#ifndef __RPL_I02_RPL_I02__29_H__
#define __RPL_I02_RPL_I02__29_H__

#include "../../common/Util.h"
#include "../segment/CTD.h"
#include "../segment/DSC.h"
#include "../segment/DSP.h"
#include "../segment/MSA.h"
#include "../segment/MSH.h"
#include "../segment/NTE.h"
#include "../segment/PRD.h"
#include "../segment/SFT.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/* Internal structures/groups */
struct RPL_I02_RPL_I02_PROVIDER; /* PROVIDER */

/*  */
struct RPL_I02_RPL_I02 : public HL7Message {
  RPL_I02_RPL_I02() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RPL_I02_RPL_I02_MSH_1,
    RPL_I02_RPL_I02_SFT_2,
    RPL_I02_RPL_I02_UAC_3,
    RPL_I02_RPL_I02_MSA_4,
    RPL_I02_RPL_I02_NTE_6,
    RPL_I02_RPL_I02_DSP_7,
    RPL_I02_RPL_I02_DSC_8,
    RPL_I02_RPL_I02_CTD_9,
    RPL_I02_RPL_I02_PRD_10,
    FIELD_ID_MAX
  };

  const char* className() const { return "RPL_I02_RPL_I02"; }
  RPL_I02_RPL_I02* create() const { return new RPL_I02_RPL_I02(); }

 private:
  /* Initialize object */
  void init() {
    setName("RPL_I02_RPL_I02");
    addObject<MSH>(RPL_I02_RPL_I02_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(RPL_I02_RPL_I02_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(RPL_I02_RPL_I02_UAC_3, "UAC.3", HL7::optional, HL7::repetition_off);
    addObject<MSA>(RPL_I02_RPL_I02_MSA_4, "MSA.4", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(RPL_I02_RPL_I02_NTE_6, "NTE.6", HL7::optional, HL7::repetition_on);
    addObject<DSP>(RPL_I02_RPL_I02_DSP_7, "DSP.7", HL7::optional, HL7::repetition_on);
    addObject<DSC>(RPL_I02_RPL_I02_DSC_8, "DSC.8", HL7::optional, HL7::repetition_off);
    addObject<CTD>(RPL_I02_RPL_I02_CTD_9, "CTD.9", HL7::optional, HL7::repetition_on);
    addObject<PRD>(RPL_I02_RPL_I02_PRD_10, "PRD.10", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, RPL_I02_RPL_I02_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, RPL_I02_RPL_I02_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, RPL_I02_RPL_I02_UAC_3);
  }
  MSA* getMSA_4(size_t index = 0) {
    return (MSA*)this->getObjectSafe(index, RPL_I02_RPL_I02_MSA_4);
  }
  NTE* getNTE_6(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RPL_I02_RPL_I02_NTE_6);
  }
  DSP* getDSP_7(size_t index = 0) {
    return (DSP*)this->getObjectSafe(index, RPL_I02_RPL_I02_DSP_7);
  }
  DSC* getDSC_8(size_t index = 0) {
    return (DSC*)this->getObjectSafe(index, RPL_I02_RPL_I02_DSC_8);
  }
  CTD* getCTD_9(size_t index = 0) {
    return (CTD*)this->getObjectSafe(index, RPL_I02_RPL_I02_CTD_9);
  }
  PRD* getPRD_10(size_t index = 0) {
    return (PRD*)this->getObjectSafe(index, RPL_I02_RPL_I02_PRD_10);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, RPL_I02_RPL_I02_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, RPL_I02_RPL_I02_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, RPL_I02_RPL_I02_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMSA_4(size_t index = 0) {
    try {
      return this->getObject(index, RPL_I02_RPL_I02_MSA_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_6(size_t index = 0) {
    try {
      return this->getObject(index, RPL_I02_RPL_I02_NTE_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDSP_7(size_t index = 0) {
    try {
      return this->getObject(index, RPL_I02_RPL_I02_DSP_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDSC_8(size_t index = 0) {
    try {
      return this->getObject(index, RPL_I02_RPL_I02_DSC_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCTD_9(size_t index = 0) {
    try {
      return this->getObject(index, RPL_I02_RPL_I02_CTD_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRD_10(size_t index = 0) {
    try {
      return this->getObject(index, RPL_I02_RPL_I02_PRD_10) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RPL_I02_RPL_I02_ */
} /* namespace HL7_29 */
#endif /*  __RPL_I02_RPL_I02__29_H__ */
