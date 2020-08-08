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


#ifndef __EHC_E15_EHC_E15__29_H__
#define __EHC_E15_EHC_E15__29_H__

#include "../../common/Util.h"
#include "../segment/ADJ.h"
#include "../segment/IPR.h"
#include "../segment/IVC.h"
#include "../segment/MSH.h"
#include "../segment/PMT.h"
#include "../segment/PRT.h"
#include "../segment/PSG.h"
#include "../segment/PSL.h"
#include "../segment/PSS.h"
#include "../segment/PYE.h"
#include "../segment/ROL.h"
#include "../segment/SFT.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/* Internal structures/groups */
struct EHC_E15_EHC_E15_PAYMENT_REMITTANCE_HEADER_INFO; /* PAYMENT_REMITTANCE_HEADER_INFO */
struct EHC_E15_EHC_E15_PAYMENT_REMITTANCE_DETAIL_INFO; /* PAYMENT_REMITTANCE_DETAIL_INFO */
struct EHC_E15_EHC_E15_ADJUSTMENT_PAYEE; /* ADJUSTMENT_PAYEE */
struct EHC_E15_EHC_E15_PRODUCT_SERVICE_SECTION; /* PRODUCT_SERVICE_SECTION */
struct EHC_E15_EHC_E15_PRODUCT_SERVICE_GROUP; /* PRODUCT_SERVICE_GROUP */
struct EHC_E15_EHC_E15_PSL_ITEM_INFO; /* PSL_ITEM_INFO */

/*  */
struct EHC_E15_EHC_E15 : public HL7Message {
  EHC_E15_EHC_E15() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    EHC_E15_EHC_E15_MSH_1,
    EHC_E15_EHC_E15_SFT_2,
    EHC_E15_EHC_E15_UAC_3,
    EHC_E15_EHC_E15_ADJ_7,
    EHC_E15_EHC_E15_PRT_8,
    EHC_E15_EHC_E15_ROL_9,
    EHC_E15_EHC_E15_IPR_11,
    EHC_E15_EHC_E15_IVC_12,
    EHC_E15_EHC_E15_PSS_14,
    EHC_E15_EHC_E15_PSG_16,
    EHC_E15_EHC_E15_ADJ_17,
    EHC_E15_EHC_E15_PSL_18,
    EHC_E15_EHC_E15_PMT_19,
    EHC_E15_EHC_E15_PYE_20,
    FIELD_ID_MAX
  };

  const char* className() const { return "EHC_E15_EHC_E15"; }
  EHC_E15_EHC_E15* create() const { return new EHC_E15_EHC_E15(); }

 private:
  /* Initialize object */
  void init() {
    setName("EHC_E15_EHC_E15");
    addObject<MSH>(EHC_E15_EHC_E15_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(EHC_E15_EHC_E15_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(EHC_E15_EHC_E15_UAC_3, "UAC.3", HL7::optional, HL7::repetition_on);
    addObject<ADJ>(EHC_E15_EHC_E15_ADJ_7, "ADJ.7", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(EHC_E15_EHC_E15_PRT_8, "PRT.8", HL7::optional, HL7::repetition_off);
    addObject<ROL>(EHC_E15_EHC_E15_ROL_9, "ROL.9", HL7::optional, HL7::repetition_off);
    addObject<IPR>(EHC_E15_EHC_E15_IPR_11, "IPR.11", HL7::initialized, HL7::repetition_off);
    addObject<IVC>(EHC_E15_EHC_E15_IVC_12, "IVC.12", HL7::initialized, HL7::repetition_off);
    addObject<PSS>(EHC_E15_EHC_E15_PSS_14, "PSS.14", HL7::initialized, HL7::repetition_off);
    addObject<PSG>(EHC_E15_EHC_E15_PSG_16, "PSG.16", HL7::initialized, HL7::repetition_off);
    addObject<ADJ>(EHC_E15_EHC_E15_ADJ_17, "ADJ.17", HL7::optional, HL7::repetition_on);
    addObject<PSL>(EHC_E15_EHC_E15_PSL_18, "PSL.18", HL7::initialized, HL7::repetition_off);
    addObject<PMT>(EHC_E15_EHC_E15_PMT_19, "PMT.19", HL7::initialized, HL7::repetition_off);
    addObject<PYE>(EHC_E15_EHC_E15_PYE_20, "PYE.20", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, EHC_E15_EHC_E15_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, EHC_E15_EHC_E15_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, EHC_E15_EHC_E15_UAC_3);
  }
  ADJ* getADJ_7(size_t index = 0) {
    return (ADJ*)this->getObjectSafe(index, EHC_E15_EHC_E15_ADJ_7);
  }
  PRT* getPRT_8(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, EHC_E15_EHC_E15_PRT_8);
  }
  ROL* getROL_9(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, EHC_E15_EHC_E15_ROL_9);
  }
  IPR* getIPR_11(size_t index = 0) {
    return (IPR*)this->getObjectSafe(index, EHC_E15_EHC_E15_IPR_11);
  }
  IVC* getIVC_12(size_t index = 0) {
    return (IVC*)this->getObjectSafe(index, EHC_E15_EHC_E15_IVC_12);
  }
  PSS* getPSS_14(size_t index = 0) {
    return (PSS*)this->getObjectSafe(index, EHC_E15_EHC_E15_PSS_14);
  }
  PSG* getPSG_16(size_t index = 0) {
    return (PSG*)this->getObjectSafe(index, EHC_E15_EHC_E15_PSG_16);
  }
  ADJ* getADJ_17(size_t index = 0) {
    return (ADJ*)this->getObjectSafe(index, EHC_E15_EHC_E15_ADJ_17);
  }
  PSL* getPSL_18(size_t index = 0) {
    return (PSL*)this->getObjectSafe(index, EHC_E15_EHC_E15_PSL_18);
  }
  PMT* getPMT_19(size_t index = 0) {
    return (PMT*)this->getObjectSafe(index, EHC_E15_EHC_E15_PMT_19);
  }
  PYE* getPYE_20(size_t index = 0) {
    return (PYE*)this->getObjectSafe(index, EHC_E15_EHC_E15_PYE_20);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E15_EHC_E15_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E15_EHC_E15_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E15_EHC_E15_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isADJ_7(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E15_EHC_E15_ADJ_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_8(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E15_EHC_E15_PRT_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_9(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E15_EHC_E15_ROL_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIPR_11(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E15_EHC_E15_IPR_11) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIVC_12(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E15_EHC_E15_IVC_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPSS_14(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E15_EHC_E15_PSS_14) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPSG_16(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E15_EHC_E15_PSG_16) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isADJ_17(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E15_EHC_E15_ADJ_17) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPSL_18(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E15_EHC_E15_PSL_18) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPMT_19(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E15_EHC_E15_PMT_19) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPYE_20(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E15_EHC_E15_PYE_20) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* EHC_E15_EHC_E15_ */
} /* namespace HL7_29 */
#endif /*  __EHC_E15_EHC_E15__29_H__ */
