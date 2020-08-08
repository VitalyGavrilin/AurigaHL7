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


#ifndef __RPI_I01_RPI_I01__29_H__
#define __RPI_I01_RPI_I01__29_H__

#include "../../common/Util.h"
#include "../segment/CTD.h"
#include "../segment/GT1.h"
#include "../segment/IN1.h"
#include "../segment/IN2.h"
#include "../segment/IN3.h"
#include "../segment/MSA.h"
#include "../segment/MSH.h"
#include "../segment/NK1.h"
#include "../segment/NTE.h"
#include "../segment/PID.h"
#include "../segment/PRD.h"
#include "../segment/SFT.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/* Internal structures/groups */
struct RPI_I01_RPI_I01_PROVIDER; /* PROVIDER */
struct RPI_I01_RPI_I01_GUARANTOR_INSURANCE; /* GUARANTOR_INSURANCE */
struct RPI_I01_RPI_I01_INSURANCE; /* INSURANCE */

/*  */
struct RPI_I01_RPI_I01 : public HL7Message {
  RPI_I01_RPI_I01() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RPI_I01_RPI_I01_MSH_1,
    RPI_I01_RPI_I01_SFT_2,
    RPI_I01_RPI_I01_UAC_3,
    RPI_I01_RPI_I01_MSA_4,
    RPI_I01_RPI_I01_PID_6,
    RPI_I01_RPI_I01_NK1_7,
    RPI_I01_RPI_I01_NTE_9,
    RPI_I01_RPI_I01_GT1_11,
    RPI_I01_RPI_I01_IN1_12,
    RPI_I01_RPI_I01_IN2_13,
    RPI_I01_RPI_I01_IN3_14,
    RPI_I01_RPI_I01_CTD_15,
    RPI_I01_RPI_I01_PRD_16,
    FIELD_ID_MAX
  };

  const char* className() const { return "RPI_I01_RPI_I01"; }
  RPI_I01_RPI_I01* create() const { return new RPI_I01_RPI_I01(); }

 private:
  /* Initialize object */
  void init() {
    setName("RPI_I01_RPI_I01");
    addObject<MSH>(RPI_I01_RPI_I01_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(RPI_I01_RPI_I01_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(RPI_I01_RPI_I01_UAC_3, "UAC.3", HL7::optional, HL7::repetition_off);
    addObject<MSA>(RPI_I01_RPI_I01_MSA_4, "MSA.4", HL7::initialized, HL7::repetition_off);
    addObject<PID>(RPI_I01_RPI_I01_PID_6, "PID.6", HL7::initialized, HL7::repetition_off);
    addObject<NK1>(RPI_I01_RPI_I01_NK1_7, "NK1.7", HL7::optional, HL7::repetition_on);
    addObject<NTE>(RPI_I01_RPI_I01_NTE_9, "NTE.9", HL7::optional, HL7::repetition_on);
    addObject<GT1>(RPI_I01_RPI_I01_GT1_11, "GT1.11", HL7::optional, HL7::repetition_on);
    addObject<IN1>(RPI_I01_RPI_I01_IN1_12, "IN1.12", HL7::initialized, HL7::repetition_off);
    addObject<IN2>(RPI_I01_RPI_I01_IN2_13, "IN2.13", HL7::optional, HL7::repetition_off);
    addObject<IN3>(RPI_I01_RPI_I01_IN3_14, "IN3.14", HL7::optional, HL7::repetition_off);
    addObject<CTD>(RPI_I01_RPI_I01_CTD_15, "CTD.15", HL7::optional, HL7::repetition_on);
    addObject<PRD>(RPI_I01_RPI_I01_PRD_16, "PRD.16", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, RPI_I01_RPI_I01_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, RPI_I01_RPI_I01_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, RPI_I01_RPI_I01_UAC_3);
  }
  MSA* getMSA_4(size_t index = 0) {
    return (MSA*)this->getObjectSafe(index, RPI_I01_RPI_I01_MSA_4);
  }
  PID* getPID_6(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, RPI_I01_RPI_I01_PID_6);
  }
  NK1* getNK1_7(size_t index = 0) {
    return (NK1*)this->getObjectSafe(index, RPI_I01_RPI_I01_NK1_7);
  }
  NTE* getNTE_9(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RPI_I01_RPI_I01_NTE_9);
  }
  GT1* getGT1_11(size_t index = 0) {
    return (GT1*)this->getObjectSafe(index, RPI_I01_RPI_I01_GT1_11);
  }
  IN1* getIN1_12(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, RPI_I01_RPI_I01_IN1_12);
  }
  IN2* getIN2_13(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, RPI_I01_RPI_I01_IN2_13);
  }
  IN3* getIN3_14(size_t index = 0) {
    return (IN3*)this->getObjectSafe(index, RPI_I01_RPI_I01_IN3_14);
  }
  CTD* getCTD_15(size_t index = 0) {
    return (CTD*)this->getObjectSafe(index, RPI_I01_RPI_I01_CTD_15);
  }
  PRD* getPRD_16(size_t index = 0) {
    return (PRD*)this->getObjectSafe(index, RPI_I01_RPI_I01_PRD_16);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, RPI_I01_RPI_I01_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, RPI_I01_RPI_I01_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, RPI_I01_RPI_I01_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMSA_4(size_t index = 0) {
    try {
      return this->getObject(index, RPI_I01_RPI_I01_MSA_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_6(size_t index = 0) {
    try {
      return this->getObject(index, RPI_I01_RPI_I01_PID_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNK1_7(size_t index = 0) {
    try {
      return this->getObject(index, RPI_I01_RPI_I01_NK1_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_9(size_t index = 0) {
    try {
      return this->getObject(index, RPI_I01_RPI_I01_NTE_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isGT1_11(size_t index = 0) {
    try {
      return this->getObject(index, RPI_I01_RPI_I01_GT1_11) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN1_12(size_t index = 0) {
    try {
      return this->getObject(index, RPI_I01_RPI_I01_IN1_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_13(size_t index = 0) {
    try {
      return this->getObject(index, RPI_I01_RPI_I01_IN2_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN3_14(size_t index = 0) {
    try {
      return this->getObject(index, RPI_I01_RPI_I01_IN3_14) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCTD_15(size_t index = 0) {
    try {
      return this->getObject(index, RPI_I01_RPI_I01_CTD_15) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRD_16(size_t index = 0) {
    try {
      return this->getObject(index, RPI_I01_RPI_I01_PRD_16) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RPI_I01_RPI_I01_ */
} /* namespace HL7_29 */
#endif /*  __RPI_I01_RPI_I01__29_H__ */
