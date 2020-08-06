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


#ifndef __EAN_U09_EAN_U09__29_H__
#define __EAN_U09_EAN_U09__29_H__

#include "../../common/Util.h"
#include "../segment/EQU.h"
#include "../segment/MSH.h"
#include "../segment/NDS.h"
#include "../segment/NTE.h"
#include "../segment/ROL.h"
#include "../segment/SFT.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/* Internal structures/groups */
struct EAN_U09_EAN_U09_NOTIFICATION; /* NOTIFICATION */

/*  */
struct EAN_U09_EAN_U09 : public HL7Message {
  EAN_U09_EAN_U09() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    EAN_U09_EAN_U09_MSH_1,
    EAN_U09_EAN_U09_SFT_2,
    EAN_U09_EAN_U09_UAC_3,
    EAN_U09_EAN_U09_EQU_4,
    EAN_U09_EAN_U09_ROL_6,
    EAN_U09_EAN_U09_NDS_7,
    EAN_U09_EAN_U09_NTE_8,
    FIELD_ID_MAX
  };

  const char* className() const { return "EAN_U09_EAN_U09"; }
  EAN_U09_EAN_U09* create() const { return new EAN_U09_EAN_U09(); }

 private:
  /* Initialize object */
  void init() {
    setName("EAN_U09_EAN_U09");
    addObject<MSH>(EAN_U09_EAN_U09_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(EAN_U09_EAN_U09_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(EAN_U09_EAN_U09_UAC_3, "UAC.3", HL7::optional, HL7::repetition_off);
    addObject<EQU>(EAN_U09_EAN_U09_EQU_4, "EQU.4", HL7::initialized, HL7::repetition_off);
    addObject<ROL>(EAN_U09_EAN_U09_ROL_6, "ROL.6", HL7::optional, HL7::repetition_off);
    addObject<NDS>(EAN_U09_EAN_U09_NDS_7, "NDS.7", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(EAN_U09_EAN_U09_NTE_8, "NTE.8", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, EAN_U09_EAN_U09_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, EAN_U09_EAN_U09_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, EAN_U09_EAN_U09_UAC_3);
  }
  EQU* getEQU_4(size_t index = 0) {
    return (EQU*)this->getObjectSafe(index, EAN_U09_EAN_U09_EQU_4);
  }
  ROL* getROL_6(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, EAN_U09_EAN_U09_ROL_6);
  }
  NDS* getNDS_7(size_t index = 0) {
    return (NDS*)this->getObjectSafe(index, EAN_U09_EAN_U09_NDS_7);
  }
  NTE* getNTE_8(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, EAN_U09_EAN_U09_NTE_8);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, EAN_U09_EAN_U09_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, EAN_U09_EAN_U09_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, EAN_U09_EAN_U09_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isEQU_4(size_t index = 0) {
    try {
      return this->getObject(index, EAN_U09_EAN_U09_EQU_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_6(size_t index = 0) {
    try {
      return this->getObject(index, EAN_U09_EAN_U09_ROL_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNDS_7(size_t index = 0) {
    try {
      return this->getObject(index, EAN_U09_EAN_U09_NDS_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_8(size_t index = 0) {
    try {
      return this->getObject(index, EAN_U09_EAN_U09_NTE_8) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* EAN_U09_EAN_U09_ */
} /* namespace HL7_29 */
#endif /*  __EAN_U09_EAN_U09__29_H__ */
