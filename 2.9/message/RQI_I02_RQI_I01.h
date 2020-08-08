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


#ifndef __RQI_I02_RQI_I01__29_H__
#define __RQI_I02_RQI_I01__29_H__

#include "../../common/Util.h"
#include "../segment/CTD.h"
#include "../segment/GT1.h"
#include "../segment/IN1.h"
#include "../segment/IN2.h"
#include "../segment/IN3.h"
#include "../segment/MSH.h"
#include "../segment/NK1.h"
#include "../segment/NTE.h"
#include "../segment/PID.h"
#include "../segment/PRD.h"
#include "../segment/SFT.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/* Internal structures/groups */
struct RQI_I02_RQI_I01_PROVIDER; /* PROVIDER */
struct RQI_I02_RQI_I01_GUARANTOR_INSURANCE; /* GUARANTOR_INSURANCE */
struct RQI_I02_RQI_I01_INSURANCE; /* INSURANCE */

/*  */
struct RQI_I02_RQI_I01 : public HL7Message {
  RQI_I02_RQI_I01() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RQI_I02_RQI_I01_MSH_1,
    RQI_I02_RQI_I01_SFT_2,
    RQI_I02_RQI_I01_UAC_3,
    RQI_I02_RQI_I01_PID_5,
    RQI_I02_RQI_I01_NK1_6,
    RQI_I02_RQI_I01_NTE_8,
    RQI_I02_RQI_I01_GT1_10,
    RQI_I02_RQI_I01_IN1_11,
    RQI_I02_RQI_I01_IN2_12,
    RQI_I02_RQI_I01_IN3_13,
    RQI_I02_RQI_I01_CTD_14,
    RQI_I02_RQI_I01_PRD_15,
    FIELD_ID_MAX
  };

  const char* className() const { return "RQI_I02_RQI_I01"; }
  RQI_I02_RQI_I01* create() const { return new RQI_I02_RQI_I01(); }

 private:
  /* Initialize object */
  void init() {
    setName("RQI_I02_RQI_I01");
    addObject<MSH>(RQI_I02_RQI_I01_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(RQI_I02_RQI_I01_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(RQI_I02_RQI_I01_UAC_3, "UAC.3", HL7::optional, HL7::repetition_off);
    addObject<PID>(RQI_I02_RQI_I01_PID_5, "PID.5", HL7::initialized, HL7::repetition_off);
    addObject<NK1>(RQI_I02_RQI_I01_NK1_6, "NK1.6", HL7::optional, HL7::repetition_on);
    addObject<NTE>(RQI_I02_RQI_I01_NTE_8, "NTE.8", HL7::optional, HL7::repetition_on);
    addObject<GT1>(RQI_I02_RQI_I01_GT1_10, "GT1.10", HL7::optional, HL7::repetition_on);
    addObject<IN1>(RQI_I02_RQI_I01_IN1_11, "IN1.11", HL7::initialized, HL7::repetition_off);
    addObject<IN2>(RQI_I02_RQI_I01_IN2_12, "IN2.12", HL7::optional, HL7::repetition_off);
    addObject<IN3>(RQI_I02_RQI_I01_IN3_13, "IN3.13", HL7::optional, HL7::repetition_off);
    addObject<CTD>(RQI_I02_RQI_I01_CTD_14, "CTD.14", HL7::optional, HL7::repetition_on);
    addObject<PRD>(RQI_I02_RQI_I01_PRD_15, "PRD.15", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, RQI_I02_RQI_I01_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, RQI_I02_RQI_I01_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, RQI_I02_RQI_I01_UAC_3);
  }
  PID* getPID_5(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, RQI_I02_RQI_I01_PID_5);
  }
  NK1* getNK1_6(size_t index = 0) {
    return (NK1*)this->getObjectSafe(index, RQI_I02_RQI_I01_NK1_6);
  }
  NTE* getNTE_8(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RQI_I02_RQI_I01_NTE_8);
  }
  GT1* getGT1_10(size_t index = 0) {
    return (GT1*)this->getObjectSafe(index, RQI_I02_RQI_I01_GT1_10);
  }
  IN1* getIN1_11(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, RQI_I02_RQI_I01_IN1_11);
  }
  IN2* getIN2_12(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, RQI_I02_RQI_I01_IN2_12);
  }
  IN3* getIN3_13(size_t index = 0) {
    return (IN3*)this->getObjectSafe(index, RQI_I02_RQI_I01_IN3_13);
  }
  CTD* getCTD_14(size_t index = 0) {
    return (CTD*)this->getObjectSafe(index, RQI_I02_RQI_I01_CTD_14);
  }
  PRD* getPRD_15(size_t index = 0) {
    return (PRD*)this->getObjectSafe(index, RQI_I02_RQI_I01_PRD_15);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, RQI_I02_RQI_I01_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, RQI_I02_RQI_I01_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, RQI_I02_RQI_I01_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_5(size_t index = 0) {
    try {
      return this->getObject(index, RQI_I02_RQI_I01_PID_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNK1_6(size_t index = 0) {
    try {
      return this->getObject(index, RQI_I02_RQI_I01_NK1_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_8(size_t index = 0) {
    try {
      return this->getObject(index, RQI_I02_RQI_I01_NTE_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isGT1_10(size_t index = 0) {
    try {
      return this->getObject(index, RQI_I02_RQI_I01_GT1_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN1_11(size_t index = 0) {
    try {
      return this->getObject(index, RQI_I02_RQI_I01_IN1_11) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_12(size_t index = 0) {
    try {
      return this->getObject(index, RQI_I02_RQI_I01_IN2_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN3_13(size_t index = 0) {
    try {
      return this->getObject(index, RQI_I02_RQI_I01_IN3_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCTD_14(size_t index = 0) {
    try {
      return this->getObject(index, RQI_I02_RQI_I01_CTD_14) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRD_15(size_t index = 0) {
    try {
      return this->getObject(index, RQI_I02_RQI_I01_PRD_15) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RQI_I02_RQI_I01_ */
} /* namespace HL7_29 */
#endif /*  __RQI_I02_RQI_I01__29_H__ */
