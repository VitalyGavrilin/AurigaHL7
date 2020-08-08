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


#ifndef __EHC_E04_EHC_E04__29_H__
#define __EHC_E04_EHC_E04__29_H__

#include "../../common/Util.h"
#include "../segment/IVC.h"
#include "../segment/MSH.h"
#include "../segment/NTE.h"
#include "../segment/PSG.h"
#include "../segment/PSL.h"
#include "../segment/PSS.h"
#include "../segment/SFT.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/* Internal structures/groups */
struct EHC_E04_EHC_E04_REASSESSMENT_REQUEST_INFO; /* REASSESSMENT_REQUEST_INFO */
struct EHC_E04_EHC_E04_PRODUCT_SERVICE_SECTION; /* PRODUCT_SERVICE_SECTION */
struct EHC_E04_EHC_E04_PRODUCT_SERVICE_GROUP; /* PRODUCT_SERVICE_GROUP */

/*  */
struct EHC_E04_EHC_E04 : public HL7Message {
  EHC_E04_EHC_E04() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    EHC_E04_EHC_E04_MSH_1,
    EHC_E04_EHC_E04_SFT_2,
    EHC_E04_EHC_E04_UAC_3,
    EHC_E04_EHC_E04_IVC_6,
    EHC_E04_EHC_E04_NTE_7,
    EHC_E04_EHC_E04_PSS_9,
    EHC_E04_EHC_E04_PSG_10,
    EHC_E04_EHC_E04_PSL_11,
    FIELD_ID_MAX
  };

  const char* className() const { return "EHC_E04_EHC_E04"; }
  EHC_E04_EHC_E04* create() const { return new EHC_E04_EHC_E04(); }

 private:
  /* Initialize object */
  void init() {
    setName("EHC_E04_EHC_E04");
    addObject<MSH>(EHC_E04_EHC_E04_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(EHC_E04_EHC_E04_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(EHC_E04_EHC_E04_UAC_3, "UAC.3", HL7::optional, HL7::repetition_on);
    addObject<IVC>(EHC_E04_EHC_E04_IVC_6, "IVC.6", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(EHC_E04_EHC_E04_NTE_7, "NTE.7", HL7::optional, HL7::repetition_on);
    addObject<PSS>(EHC_E04_EHC_E04_PSS_9, "PSS.9", HL7::initialized, HL7::repetition_off);
    addObject<PSG>(EHC_E04_EHC_E04_PSG_10, "PSG.10", HL7::initialized, HL7::repetition_off);
    addObject<PSL>(EHC_E04_EHC_E04_PSL_11, "PSL.11", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, EHC_E04_EHC_E04_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, EHC_E04_EHC_E04_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, EHC_E04_EHC_E04_UAC_3);
  }
  IVC* getIVC_6(size_t index = 0) {
    return (IVC*)this->getObjectSafe(index, EHC_E04_EHC_E04_IVC_6);
  }
  NTE* getNTE_7(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, EHC_E04_EHC_E04_NTE_7);
  }
  PSS* getPSS_9(size_t index = 0) {
    return (PSS*)this->getObjectSafe(index, EHC_E04_EHC_E04_PSS_9);
  }
  PSG* getPSG_10(size_t index = 0) {
    return (PSG*)this->getObjectSafe(index, EHC_E04_EHC_E04_PSG_10);
  }
  PSL* getPSL_11(size_t index = 0) {
    return (PSL*)this->getObjectSafe(index, EHC_E04_EHC_E04_PSL_11);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E04_EHC_E04_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E04_EHC_E04_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E04_EHC_E04_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIVC_6(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E04_EHC_E04_IVC_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_7(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E04_EHC_E04_NTE_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPSS_9(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E04_EHC_E04_PSS_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPSG_10(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E04_EHC_E04_PSG_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPSL_11(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E04_EHC_E04_PSL_11) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* EHC_E04_EHC_E04_ */
} /* namespace HL7_29 */
#endif /*  __EHC_E04_EHC_E04__29_H__ */
