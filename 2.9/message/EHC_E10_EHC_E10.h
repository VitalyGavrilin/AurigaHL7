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


#ifndef __EHC_E10_EHC_E10__29_H__
#define __EHC_E10_EHC_E10__29_H__

#include "../../common/Util.h"
#include "../segment/ADJ.h"
#include "../segment/IN1.h"
#include "../segment/IN2.h"
#include "../segment/IPR.h"
#include "../segment/IVC.h"
#include "../segment/MSA.h"
#include "../segment/MSH.h"
#include "../segment/PSG.h"
#include "../segment/PSL.h"
#include "../segment/PSS.h"
#include "../segment/PYE.h"

namespace HL7_29 {

/* Internal structures/groups */
struct EHC_E10_EHC_E10_INVOICE_PROCESSING_RESULTS_INFO; /* INVOICE_PROCESSING_RESULTS_INFO */
struct EHC_E10_EHC_E10_PRODUCT_SERVICE_SECTION; /* PRODUCT_SERVICE_SECTION */
struct EHC_E10_EHC_E10_PRODUCT_SERVICE_GROUP; /* PRODUCT_SERVICE_GROUP */
struct EHC_E10_EHC_E10_PRODUCT_SERVICE_LINE_INFO; /* PRODUCT_SERVICE_LINE_INFO */

/*  */
struct EHC_E10_EHC_E10 : public HL7Message {
  EHC_E10_EHC_E10() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    EHC_E10_EHC_E10_MSH_1,
    EHC_E10_EHC_E10_MSA_4,
    EHC_E10_EHC_E10_IN1_8,
    EHC_E10_EHC_E10_IN2_9,
    EHC_E10_EHC_E10_IPR_10,
    EHC_E10_EHC_E10_IVC_11,
    EHC_E10_EHC_E10_PYE_13,
    EHC_E10_EHC_E10_PSS_15,
    EHC_E10_EHC_E10_PSG_17,
    EHC_E10_EHC_E10_ADJ_18,
    EHC_E10_EHC_E10_PSL_19,
    FIELD_ID_MAX
  };

  const char* className() const { return "EHC_E10_EHC_E10"; }
  EHC_E10_EHC_E10* create() const { return new EHC_E10_EHC_E10(); }

 private:
  /* Initialize object */
  void init() {
    setName("EHC_E10_EHC_E10");
    addObject<MSH>(EHC_E10_EHC_E10_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<MSA>(EHC_E10_EHC_E10_MSA_4, "MSA.4", HL7::initialized, HL7::repetition_off);
    addObject<IN1>(EHC_E10_EHC_E10_IN1_8, "IN1.8", HL7::initialized, HL7::repetition_off);
    addObject<IN2>(EHC_E10_EHC_E10_IN2_9, "IN2.9", HL7::optional, HL7::repetition_off);
    addObject<IPR>(EHC_E10_EHC_E10_IPR_10, "IPR.10", HL7::initialized, HL7::repetition_off);
    addObject<IVC>(EHC_E10_EHC_E10_IVC_11, "IVC.11", HL7::initialized, HL7::repetition_off);
    addObject<PYE>(EHC_E10_EHC_E10_PYE_13, "PYE.13", HL7::initialized, HL7::repetition_off);
    addObject<PSS>(EHC_E10_EHC_E10_PSS_15, "PSS.15", HL7::initialized, HL7::repetition_off);
    addObject<PSG>(EHC_E10_EHC_E10_PSG_17, "PSG.17", HL7::initialized, HL7::repetition_off);
    addObject<ADJ>(EHC_E10_EHC_E10_ADJ_18, "ADJ.18", HL7::optional, HL7::repetition_on);
    addObject<PSL>(EHC_E10_EHC_E10_PSL_19, "PSL.19", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, EHC_E10_EHC_E10_MSH_1);
  }
  MSA* getMSA_4(size_t index = 0) {
    return (MSA*)this->getObjectSafe(index, EHC_E10_EHC_E10_MSA_4);
  }
  IN1* getIN1_8(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, EHC_E10_EHC_E10_IN1_8);
  }
  IN2* getIN2_9(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, EHC_E10_EHC_E10_IN2_9);
  }
  IPR* getIPR_10(size_t index = 0) {
    return (IPR*)this->getObjectSafe(index, EHC_E10_EHC_E10_IPR_10);
  }
  IVC* getIVC_11(size_t index = 0) {
    return (IVC*)this->getObjectSafe(index, EHC_E10_EHC_E10_IVC_11);
  }
  PYE* getPYE_13(size_t index = 0) {
    return (PYE*)this->getObjectSafe(index, EHC_E10_EHC_E10_PYE_13);
  }
  PSS* getPSS_15(size_t index = 0) {
    return (PSS*)this->getObjectSafe(index, EHC_E10_EHC_E10_PSS_15);
  }
  PSG* getPSG_17(size_t index = 0) {
    return (PSG*)this->getObjectSafe(index, EHC_E10_EHC_E10_PSG_17);
  }
  ADJ* getADJ_18(size_t index = 0) {
    return (ADJ*)this->getObjectSafe(index, EHC_E10_EHC_E10_ADJ_18);
  }
  PSL* getPSL_19(size_t index = 0) {
    return (PSL*)this->getObjectSafe(index, EHC_E10_EHC_E10_PSL_19);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E10_EHC_E10_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMSA_4(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E10_EHC_E10_MSA_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN1_8(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E10_EHC_E10_IN1_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_9(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E10_EHC_E10_IN2_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIPR_10(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E10_EHC_E10_IPR_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIVC_11(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E10_EHC_E10_IVC_11) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPYE_13(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E10_EHC_E10_PYE_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPSS_15(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E10_EHC_E10_PSS_15) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPSG_17(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E10_EHC_E10_PSG_17) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isADJ_18(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E10_EHC_E10_ADJ_18) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPSL_19(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E10_EHC_E10_PSL_19) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* EHC_E10_EHC_E10_ */
} /* namespace HL7_29 */
#endif /*  __EHC_E10_EHC_E10__29_H__ */
