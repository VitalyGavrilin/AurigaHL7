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


#ifndef __RQP_I04_RQP_I04__29_H__
#define __RQP_I04_RQP_I04__29_H__

#include "../../common/Util.h"
#include "../segment/CTD.h"
#include "../segment/GT1.h"
#include "../segment/MSH.h"
#include "../segment/NK1.h"
#include "../segment/NTE.h"
#include "../segment/PID.h"
#include "../segment/PRD.h"
#include "../segment/SFT.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/* Internal structures/groups */
struct RQP_I04_RQP_I04_PROVIDER; /* PROVIDER */

/*  */
struct RQP_I04_RQP_I04 : public HL7Message {
  RQP_I04_RQP_I04() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RQP_I04_RQP_I04_MSH_1,
    RQP_I04_RQP_I04_SFT_2,
    RQP_I04_RQP_I04_UAC_3,
    RQP_I04_RQP_I04_PID_5,
    RQP_I04_RQP_I04_NK1_6,
    RQP_I04_RQP_I04_GT1_7,
    RQP_I04_RQP_I04_NTE_8,
    RQP_I04_RQP_I04_CTD_9,
    RQP_I04_RQP_I04_PRD_10,
    FIELD_ID_MAX
  };

  const char* className() const { return "RQP_I04_RQP_I04"; }
  RQP_I04_RQP_I04* create() const { return new RQP_I04_RQP_I04(); }

 private:
  /* Initialize object */
  void init() {
    setName("RQP_I04_RQP_I04");
    addObject<MSH>(RQP_I04_RQP_I04_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(RQP_I04_RQP_I04_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(RQP_I04_RQP_I04_UAC_3, "UAC.3", HL7::optional, HL7::repetition_off);
    addObject<PID>(RQP_I04_RQP_I04_PID_5, "PID.5", HL7::initialized, HL7::repetition_off);
    addObject<NK1>(RQP_I04_RQP_I04_NK1_6, "NK1.6", HL7::optional, HL7::repetition_on);
    addObject<GT1>(RQP_I04_RQP_I04_GT1_7, "GT1.7", HL7::optional, HL7::repetition_on);
    addObject<NTE>(RQP_I04_RQP_I04_NTE_8, "NTE.8", HL7::optional, HL7::repetition_on);
    addObject<CTD>(RQP_I04_RQP_I04_CTD_9, "CTD.9", HL7::optional, HL7::repetition_on);
    addObject<PRD>(RQP_I04_RQP_I04_PRD_10, "PRD.10", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, RQP_I04_RQP_I04_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, RQP_I04_RQP_I04_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, RQP_I04_RQP_I04_UAC_3);
  }
  PID* getPID_5(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, RQP_I04_RQP_I04_PID_5);
  }
  NK1* getNK1_6(size_t index = 0) {
    return (NK1*)this->getObjectSafe(index, RQP_I04_RQP_I04_NK1_6);
  }
  GT1* getGT1_7(size_t index = 0) {
    return (GT1*)this->getObjectSafe(index, RQP_I04_RQP_I04_GT1_7);
  }
  NTE* getNTE_8(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RQP_I04_RQP_I04_NTE_8);
  }
  CTD* getCTD_9(size_t index = 0) {
    return (CTD*)this->getObjectSafe(index, RQP_I04_RQP_I04_CTD_9);
  }
  PRD* getPRD_10(size_t index = 0) {
    return (PRD*)this->getObjectSafe(index, RQP_I04_RQP_I04_PRD_10);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, RQP_I04_RQP_I04_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, RQP_I04_RQP_I04_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, RQP_I04_RQP_I04_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_5(size_t index = 0) {
    try {
      return this->getObject(index, RQP_I04_RQP_I04_PID_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNK1_6(size_t index = 0) {
    try {
      return this->getObject(index, RQP_I04_RQP_I04_NK1_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isGT1_7(size_t index = 0) {
    try {
      return this->getObject(index, RQP_I04_RQP_I04_GT1_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_8(size_t index = 0) {
    try {
      return this->getObject(index, RQP_I04_RQP_I04_NTE_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCTD_9(size_t index = 0) {
    try {
      return this->getObject(index, RQP_I04_RQP_I04_CTD_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRD_10(size_t index = 0) {
    try {
      return this->getObject(index, RQP_I04_RQP_I04_PRD_10) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RQP_I04_RQP_I04_ */
} /* namespace HL7_29 */
#endif /*  __RQP_I04_RQP_I04__29_H__ */
