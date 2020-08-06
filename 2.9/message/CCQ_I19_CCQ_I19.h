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


#ifndef __CCQ_I19_CCQ_I19__29_H__
#define __CCQ_I19_CCQ_I19__29_H__

#include "../../common/Util.h"
#include "../segment/CTD.h"
#include "../segment/MSH.h"
#include "../segment/PRD.h"
#include "../segment/REL.h"
#include "../segment/RF1.h"
#include "../segment/SFT.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/* Internal structures/groups */
struct CCQ_I19_CCQ_I19_PROVIDER_CONTACT; /* PROVIDER_CONTACT */

/*  */
struct CCQ_I19_CCQ_I19 : public HL7Message {
  CCQ_I19_CCQ_I19() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    CCQ_I19_CCQ_I19_MSH_1,
    CCQ_I19_CCQ_I19_SFT_2,
    CCQ_I19_CCQ_I19_UAC_3,
    CCQ_I19_CCQ_I19_RF1_4,
    CCQ_I19_CCQ_I19_REL_6,
    CCQ_I19_CCQ_I19_CTD_7,
    CCQ_I19_CCQ_I19_PRD_8,
    FIELD_ID_MAX
  };

  const char* className() const { return "CCQ_I19_CCQ_I19"; }
  CCQ_I19_CCQ_I19* create() const { return new CCQ_I19_CCQ_I19(); }

 private:
  /* Initialize object */
  void init() {
    setName("CCQ_I19_CCQ_I19");
    addObject<MSH>(CCQ_I19_CCQ_I19_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(CCQ_I19_CCQ_I19_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(CCQ_I19_CCQ_I19_UAC_3, "UAC.3", HL7::optional, HL7::repetition_off);
    addObject<RF1>(CCQ_I19_CCQ_I19_RF1_4, "RF1.4", HL7::initialized, HL7::repetition_off);
    addObject<REL>(CCQ_I19_CCQ_I19_REL_6, "REL.6", HL7::optional, HL7::repetition_on);
    addObject<CTD>(CCQ_I19_CCQ_I19_CTD_7, "CTD.7", HL7::optional, HL7::repetition_on);
    addObject<PRD>(CCQ_I19_CCQ_I19_PRD_8, "PRD.8", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, CCQ_I19_CCQ_I19_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, CCQ_I19_CCQ_I19_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, CCQ_I19_CCQ_I19_UAC_3);
  }
  RF1* getRF1_4(size_t index = 0) {
    return (RF1*)this->getObjectSafe(index, CCQ_I19_CCQ_I19_RF1_4);
  }
  REL* getREL_6(size_t index = 0) {
    return (REL*)this->getObjectSafe(index, CCQ_I19_CCQ_I19_REL_6);
  }
  CTD* getCTD_7(size_t index = 0) {
    return (CTD*)this->getObjectSafe(index, CCQ_I19_CCQ_I19_CTD_7);
  }
  PRD* getPRD_8(size_t index = 0) {
    return (PRD*)this->getObjectSafe(index, CCQ_I19_CCQ_I19_PRD_8);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, CCQ_I19_CCQ_I19_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, CCQ_I19_CCQ_I19_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, CCQ_I19_CCQ_I19_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRF1_4(size_t index = 0) {
    try {
      return this->getObject(index, CCQ_I19_CCQ_I19_RF1_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isREL_6(size_t index = 0) {
    try {
      return this->getObject(index, CCQ_I19_CCQ_I19_REL_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCTD_7(size_t index = 0) {
    try {
      return this->getObject(index, CCQ_I19_CCQ_I19_CTD_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRD_8(size_t index = 0) {
    try {
      return this->getObject(index, CCQ_I19_CCQ_I19_PRD_8) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* CCQ_I19_CCQ_I19_ */
} /* namespace HL7_29 */
#endif /*  __CCQ_I19_CCQ_I19__29_H__ */
