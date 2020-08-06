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


#ifndef __MFK_M05_MFK_M01__29_H__
#define __MFK_M05_MFK_M01__29_H__

#include "../../common/Util.h"
#include "../segment/ERR.h"
#include "../segment/MFA.h"
#include "../segment/MFI.h"
#include "../segment/MSA.h"
#include "../segment/MSH.h"
#include "../segment/SFT.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/*  */
struct MFK_M05_MFK_M01 : public HL7Message {
  MFK_M05_MFK_M01() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    MFK_M05_MFK_M01_MSH_1,
    MFK_M05_MFK_M01_SFT_2,
    MFK_M05_MFK_M01_UAC_3,
    MFK_M05_MFK_M01_MSA_4,
    MFK_M05_MFK_M01_ERR_5,
    MFK_M05_MFK_M01_MFI_6,
    MFK_M05_MFK_M01_MFA_7,
    FIELD_ID_MAX
  };

  const char* className() const { return "MFK_M05_MFK_M01"; }
  MFK_M05_MFK_M01* create() const { return new MFK_M05_MFK_M01(); }

 private:
  /* Initialize object */
  void init() {
    setName("MFK_M05_MFK_M01");
    addObject<MSH>(MFK_M05_MFK_M01_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(MFK_M05_MFK_M01_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(MFK_M05_MFK_M01_UAC_3, "UAC.3", HL7::optional, HL7::repetition_off);
    addObject<MSA>(MFK_M05_MFK_M01_MSA_4, "MSA.4", HL7::initialized, HL7::repetition_off);
    addObject<ERR>(MFK_M05_MFK_M01_ERR_5, "ERR.5", HL7::optional, HL7::repetition_on);
    addObject<MFI>(MFK_M05_MFK_M01_MFI_6, "MFI.6", HL7::initialized, HL7::repetition_off);
    addObject<MFA>(MFK_M05_MFK_M01_MFA_7, "MFA.7", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, MFK_M05_MFK_M01_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, MFK_M05_MFK_M01_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, MFK_M05_MFK_M01_UAC_3);
  }
  MSA* getMSA_4(size_t index = 0) {
    return (MSA*)this->getObjectSafe(index, MFK_M05_MFK_M01_MSA_4);
  }
  ERR* getERR_5(size_t index = 0) {
    return (ERR*)this->getObjectSafe(index, MFK_M05_MFK_M01_ERR_5);
  }
  MFI* getMFI_6(size_t index = 0) {
    return (MFI*)this->getObjectSafe(index, MFK_M05_MFK_M01_MFI_6);
  }
  MFA* getMFA_7(size_t index = 0) {
    return (MFA*)this->getObjectSafe(index, MFK_M05_MFK_M01_MFA_7);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, MFK_M05_MFK_M01_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, MFK_M05_MFK_M01_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, MFK_M05_MFK_M01_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMSA_4(size_t index = 0) {
    try {
      return this->getObject(index, MFK_M05_MFK_M01_MSA_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isERR_5(size_t index = 0) {
    try {
      return this->getObject(index, MFK_M05_MFK_M01_ERR_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMFI_6(size_t index = 0) {
    try {
      return this->getObject(index, MFK_M05_MFK_M01_MFI_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMFA_7(size_t index = 0) {
    try {
      return this->getObject(index, MFK_M05_MFK_M01_MFA_7) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* MFK_M05_MFK_M01_ */
} /* namespace HL7_29 */
#endif /*  __MFK_M05_MFK_M01__29_H__ */
