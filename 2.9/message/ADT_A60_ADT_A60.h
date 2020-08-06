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


#ifndef __ADT_A60_ADT_A60__29_H__
#define __ADT_A60_ADT_A60__29_H__

#include "../../common/Util.h"
#include "../segment/ARV.h"
#include "../segment/EVN.h"
#include "../segment/IAM.h"
#include "../segment/IAR.h"
#include "../segment/MSH.h"
#include "../segment/NTE.h"
#include "../segment/PID.h"
#include "../segment/PV1.h"
#include "../segment/PV2.h"
#include "../segment/SFT.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/* Internal structures/groups */
struct ADT_A60_ADT_A60_VISIT_GROUP; /* VISIT_GROUP */
struct ADT_A60_ADT_A60_ADVERSE_REACTION_GROUP; /* ADVERSE_REACTION_GROUP */

/*  */
struct ADT_A60_ADT_A60 : public HL7Message {
  ADT_A60_ADT_A60() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    ADT_A60_ADT_A60_MSH_1,
    ADT_A60_ADT_A60_ARV_2,
    ADT_A60_ADT_A60_SFT_3,
    ADT_A60_ADT_A60_UAC_4,
    ADT_A60_ADT_A60_EVN_5,
    ADT_A60_ADT_A60_PID_6,
    ADT_A60_ADT_A60_ARV_7,
    ADT_A60_ADT_A60_IAM_10,
    ADT_A60_ADT_A60_IAR_11,
    ADT_A60_ADT_A60_NTE_12,
    ADT_A60_ADT_A60_ARV_13,
    ADT_A60_ADT_A60_PV1_14,
    ADT_A60_ADT_A60_PV2_15,
    FIELD_ID_MAX
  };

  const char* className() const { return "ADT_A60_ADT_A60"; }
  ADT_A60_ADT_A60* create() const { return new ADT_A60_ADT_A60(); }

 private:
  /* Initialize object */
  void init() {
    setName("ADT_A60_ADT_A60");
    addObject<MSH>(ADT_A60_ADT_A60_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<ARV>(ADT_A60_ADT_A60_ARV_2, "ARV.2", HL7::optional, HL7::repetition_on);
    addObject<SFT>(ADT_A60_ADT_A60_SFT_3, "SFT.3", HL7::optional, HL7::repetition_on);
    addObject<UAC>(ADT_A60_ADT_A60_UAC_4, "UAC.4", HL7::optional, HL7::repetition_off);
    addObject<EVN>(ADT_A60_ADT_A60_EVN_5, "EVN.5", HL7::initialized, HL7::repetition_off);
    addObject<PID>(ADT_A60_ADT_A60_PID_6, "PID.6", HL7::initialized, HL7::repetition_off);
    addObject<ARV>(ADT_A60_ADT_A60_ARV_7, "ARV.7", HL7::optional, HL7::repetition_on);
    addObject<IAM>(ADT_A60_ADT_A60_IAM_10, "IAM.10", HL7::initialized, HL7::repetition_off);
    addObject<IAR>(ADT_A60_ADT_A60_IAR_11, "IAR.11", HL7::optional, HL7::repetition_on);
    addObject<NTE>(ADT_A60_ADT_A60_NTE_12, "NTE.12", HL7::optional, HL7::repetition_on);
    addObject<ARV>(ADT_A60_ADT_A60_ARV_13, "ARV.13", HL7::optional, HL7::repetition_on);
    addObject<PV1>(ADT_A60_ADT_A60_PV1_14, "PV1.14", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(ADT_A60_ADT_A60_PV2_15, "PV2.15", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, ADT_A60_ADT_A60_MSH_1);
  }
  ARV* getARV_2(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, ADT_A60_ADT_A60_ARV_2);
  }
  SFT* getSFT_3(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, ADT_A60_ADT_A60_SFT_3);
  }
  UAC* getUAC_4(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, ADT_A60_ADT_A60_UAC_4);
  }
  EVN* getEVN_5(size_t index = 0) {
    return (EVN*)this->getObjectSafe(index, ADT_A60_ADT_A60_EVN_5);
  }
  PID* getPID_6(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, ADT_A60_ADT_A60_PID_6);
  }
  ARV* getARV_7(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, ADT_A60_ADT_A60_ARV_7);
  }
  IAM* getIAM_10(size_t index = 0) {
    return (IAM*)this->getObjectSafe(index, ADT_A60_ADT_A60_IAM_10);
  }
  IAR* getIAR_11(size_t index = 0) {
    return (IAR*)this->getObjectSafe(index, ADT_A60_ADT_A60_IAR_11);
  }
  NTE* getNTE_12(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, ADT_A60_ADT_A60_NTE_12);
  }
  ARV* getARV_13(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, ADT_A60_ADT_A60_ARV_13);
  }
  PV1* getPV1_14(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, ADT_A60_ADT_A60_PV1_14);
  }
  PV2* getPV2_15(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, ADT_A60_ADT_A60_PV2_15);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A60_ADT_A60_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_2(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A60_ADT_A60_ARV_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_3(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A60_ADT_A60_SFT_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_4(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A60_ADT_A60_UAC_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isEVN_5(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A60_ADT_A60_EVN_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_6(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A60_ADT_A60_PID_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_7(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A60_ADT_A60_ARV_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIAM_10(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A60_ADT_A60_IAM_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIAR_11(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A60_ADT_A60_IAR_11) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_12(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A60_ADT_A60_NTE_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_13(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A60_ADT_A60_ARV_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_14(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A60_ADT_A60_PV1_14) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_15(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A60_ADT_A60_PV2_15) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ADT_A60_ADT_A60_ */
} /* namespace HL7_29 */
#endif /*  __ADT_A60_ADT_A60__29_H__ */
