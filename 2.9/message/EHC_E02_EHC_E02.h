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


#ifndef __EHC_E02_EHC_E02__29_H__
#define __EHC_E02_EHC_E02__29_H__

#include "../../common/Util.h"
#include "../segment/CTD.h"
#include "../segment/IVC.h"
#include "../segment/MSH.h"
#include "../segment/NTE.h"
#include "../segment/PSG.h"
#include "../segment/PSL.h"
#include "../segment/PSS.h"
#include "../segment/PYE.h"
#include "../segment/SFT.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/* Internal structures/groups */
struct EHC_E02_EHC_E02_INVOICE_INFORMATION_CANCEL; /* INVOICE_INFORMATION_CANCEL */
struct EHC_E02_EHC_E02_PRODUCT_SERVICE_SECTION; /* PRODUCT_SERVICE_SECTION */
struct EHC_E02_EHC_E02_PSG; /* PSG */

/*  */
struct EHC_E02_EHC_E02 : public HL7Message {
  EHC_E02_EHC_E02() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    EHC_E02_EHC_E02_MSH_1,
    EHC_E02_EHC_E02_SFT_2,
    EHC_E02_EHC_E02_UAC_3,
    EHC_E02_EHC_E02_CTD_6,
    EHC_E02_EHC_E02_IVC_7,
    EHC_E02_EHC_E02_NTE_8,
    EHC_E02_EHC_E02_PYE_9,
    EHC_E02_EHC_E02_PSS_11,
    EHC_E02_EHC_E02_PSG_12,
    EHC_E02_EHC_E02_PSL_13,
    FIELD_ID_MAX
  };

  const char* className() const { return "EHC_E02_EHC_E02"; }
  EHC_E02_EHC_E02* create() const { return new EHC_E02_EHC_E02(); }

 private:
  /* Initialize object */
  void init() {
    setName("EHC_E02_EHC_E02");
    addObject<MSH>(EHC_E02_EHC_E02_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(EHC_E02_EHC_E02_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(EHC_E02_EHC_E02_UAC_3, "UAC.3", HL7::optional, HL7::repetition_on);
    addObject<CTD>(EHC_E02_EHC_E02_CTD_6, "CTD.6", HL7::optional, HL7::repetition_on);
    addObject<IVC>(EHC_E02_EHC_E02_IVC_7, "IVC.7", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(EHC_E02_EHC_E02_NTE_8, "NTE.8", HL7::optional, HL7::repetition_on);
    addObject<PYE>(EHC_E02_EHC_E02_PYE_9, "PYE.9", HL7::initialized, HL7::repetition_off);
    addObject<PSS>(EHC_E02_EHC_E02_PSS_11, "PSS.11", HL7::initialized, HL7::repetition_off);
    addObject<PSG>(EHC_E02_EHC_E02_PSG_12, "PSG.12", HL7::initialized, HL7::repetition_off);
    addObject<PSL>(EHC_E02_EHC_E02_PSL_13, "PSL.13", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, EHC_E02_EHC_E02_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, EHC_E02_EHC_E02_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, EHC_E02_EHC_E02_UAC_3);
  }
  CTD* getCTD_6(size_t index = 0) {
    return (CTD*)this->getObjectSafe(index, EHC_E02_EHC_E02_CTD_6);
  }
  IVC* getIVC_7(size_t index = 0) {
    return (IVC*)this->getObjectSafe(index, EHC_E02_EHC_E02_IVC_7);
  }
  NTE* getNTE_8(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, EHC_E02_EHC_E02_NTE_8);
  }
  PYE* getPYE_9(size_t index = 0) {
    return (PYE*)this->getObjectSafe(index, EHC_E02_EHC_E02_PYE_9);
  }
  PSS* getPSS_11(size_t index = 0) {
    return (PSS*)this->getObjectSafe(index, EHC_E02_EHC_E02_PSS_11);
  }
  PSG* getPSG_12(size_t index = 0) {
    return (PSG*)this->getObjectSafe(index, EHC_E02_EHC_E02_PSG_12);
  }
  PSL* getPSL_13(size_t index = 0) {
    return (PSL*)this->getObjectSafe(index, EHC_E02_EHC_E02_PSL_13);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E02_EHC_E02_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E02_EHC_E02_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E02_EHC_E02_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCTD_6(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E02_EHC_E02_CTD_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIVC_7(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E02_EHC_E02_IVC_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_8(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E02_EHC_E02_NTE_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPYE_9(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E02_EHC_E02_PYE_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPSS_11(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E02_EHC_E02_PSS_11) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPSG_12(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E02_EHC_E02_PSG_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPSL_13(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E02_EHC_E02_PSL_13) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* EHC_E02_EHC_E02_ */
} /* namespace HL7_29 */
#endif /*  __EHC_E02_EHC_E02__29_H__ */
